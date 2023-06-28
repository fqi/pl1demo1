 /* PLIINCL ***********************************************************/
 /* STDMPP: STANDARD DECLARES FOR A NON-DB2 MPP                       */
 /* OWNING SYSTEM: MTRH <-- APPLICATION SYSTEM ID OF THIS INCLUDE     */
 /*********************************************************************/
 /*                                                                   */
 /* WHEN       WHO  ID     WHAT                                       */
 /* ---------- ---- ------ ------------------------------------------ */
 /* 1996-10-11 GTRO GMT002 FIX MTRHDLI CALLS                          */
 /* 1996-06-05 GTRO GMT001 STANDARDIZE                                */
 /*********************************************************************/
0  /*----------------------------------------------------------------*/
   /* EXTERNAL ENTRIES                                               */
   /*----------------------------------------------------------------*/
0  DCL PLITDLI               ENTRY EXTERNAL;
-%INCLUDE MTRHDLI;
0  /*----------------------------------------------------------------*/
   /* COMMON AREA USED BY MTRHDB2 AND MTRHDLI                        */
   /*----------------------------------------------------------------*/
   DCL 1 COMMON,
         %INCLUDE COMMON;
0   COMMON.IO_PCB_ADDR = IO_PCB_PTR;
    COMMON.EX_PCB_ADDR = EX_PCB_PTR;
    COMMON.AL_PCB_ADDR = AL_PCB_PTR;
    COMMON.PGMID       = 'NOT SET';
    COMMON.DLI_CALLS   = 0;
    COMMON.VALID_STAT  = ' ';
    COMMON.DB2_TERMECB = 0;
0  /*----------------------------------------------------------------*/
   /* I/O PCB MASK                                                   */
   /*----------------------------------------------------------------*/
   DCL IO_PCB_PTR            POINTER;
   DCL 1 IO_PCB              UNALIGNED BASED (IO_PCB_PTR),
         %INCLUDE IOPCB;
0  /*----------------------------------------------------------------*/
   /* ALTERNATE PCB MASK                                             */
   /*----------------------------------------------------------------*/
   DCL AL_PCB_PTR            POINTER;
   DCL 1 AL_PCB              UNALIGNED BASED (AL_PCB_PTR),
         %INCLUDE ALTPCB;
0  /*----------------------------------------------------------------*/
   /* EXPRESS PCB MASK                                               */
   /*----------------------------------------------------------------*/
   DCL EX_PCB_PTR            POINTER;
   DCL 1 EX_PCB              UNALIGNED BASED (EX_PCB_PTR),
         %INCLUDE ALTPCB;
0  /*----------------------------------------------------------------*/
   /* IMS PARM COUNT VALUES AND FUNCTION CODES                       */
   /*----------------------------------------------------------------*/
-%INCLUDE STDPARM;
0  /*----------------------------------------------------------------*/
   /* MFS FIELD ATTRIBUTES                                           */
   /*----------------------------------------------------------------*/
   DCL CURSOR                BIT (16) INIT ('1100000010000000'B) STATIC;
   DCL PROTECT               BIT (16) INIT ('0000000011100000'B) STATIC;
   DCL ALPHABETIC            BIT (16) INIT ('0000000011000000'B) STATIC;
   DCL NUMERIC               BIT (16) INIT ('0000000011010000'B) STATIC;
   DCL HILITE                BIT (16) INIT ('0000000011001000'B) STATIC;
   DCL NONDISPLAY            BIT (16) INIT ('0000000011000100'B) STATIC;
   DCL DETECTABLE            BIT (16) INIT ('0000000011000010'B) STATIC;
   DCL MODIFIED              BIT (16) INIT ('0000000011000001'B) STATIC;
   DCL MOD_NUMERIC           BIT (16) INIT ('0000000011010001'B) STATIC;
   DCL MOD_NODISP            BIT (16) INIT ('0000000011110101'B) STATIC;
0  /*----------------------------------------------------------------*/
   /* SCA FIELD ATTRIBUTES                                           */
   /*----------------------------------------------------------------*/
   DCL PROTECT_SCREEN        BIT (16) INIT ('0000000010000000'B) STATIC;
   DCL SOUND_ALARM           BIT (16) INIT ('0000000010010000'B) STATIC;
1/*********************************************************************/GMT002
 /* DUMP AND ROLL ON PLI ERROR                                        */GMT002
 /*********************************************************************/GMT002
0   ON ERROR SNAP                                                       GMT002
       BEGIN;                                                           GMT002
          ON ERROR SYSTEM;                                              GMT002
             DO;                                                        GMT002
                CALL PLIDUMP ('TBFH');                                  GMT002
                CALL MTRHDLI (COMMON,                                   GMT002
                              'PROGRAM ERROR ,ONCODE = '                GMT002
                                  || ONCODE                             GMT002
                                  || ' ,ONLOC = '                       GMT002
                                  || ONLOC,                             GMT002
                              ONE,                                      GMT002
                              ROLL,                                     GMT002
                              NULL (),                 /* PCB_PTR    */ GMT002
                              ' ',                     /* IO_AREA    */ GMT002
                              (150)' ',                /* SSA01      */ GMT002
                              (150)' ',                /* SSA02      */ GMT002
                              (150)' ',                /* SSA03      */ GMT002
                              (150)' ',                /* SSA04      */ GMT002
                              (150)' ',                /* SSA05      */ GMT002
                              (150)' ',                /* SSA06      */ GMT002
                              (150)' ',                /* SSA07      */ GMT002
                              (150)' ',                /* SSA08      */ GMT002
                              (150)' ',                /* SSA09      */ GMT002
                              (150)' ',                /* SSA10      */ GMT002
                              (150)' ',                /* SSA11      */ GMT002
                              (150)' ',                /* SSA12      */ GMT002
                              (150)' ',                /* SSA13      */ GMT002
                              (150)' ',                /* SSA14      */ GMT002
                              (150)' ');               /* SSA15      */ GMT002
             END;                                                       GMT002
       END;                                                             GMT002
