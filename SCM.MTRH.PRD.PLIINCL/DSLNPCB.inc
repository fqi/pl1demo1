0  /*******************************************************************/00010001
   /* DSLNPCB:  DRIVER'S LINE DESCRIPTION DATABASE PCB MASK           */00020001
   /*                                                                 */00030001
   /* WHEN    WHO  WHY   WHAT                                         */00040001
   /* ------- ---- ----- -------------------------------------------- */00050001
   /* 90DEC13 GTRO CR507 CLEAN UP DRIVER'S CODE                       */00060001
   /* 81JUN01 ???? REL01 ORIGINAL                                     */00070001
   /*******************************************************************/00080001
0  DCL DSLNPCB_PTR           POINTER;                                   00090001
0  DCL 01 DSLNPCB            BASED(DSLNPCB_PTR),                        00100001
          05 DBDNAM          CHAR(8),         /* DATA BASE NAME.     */ 00110001
          05 SEGLVL          CHAR(2),         /* SEGMENT LEVEL.      */ 00120001
          05 STATCD          CHAR(2),         /* STATUS CODE.        */ 00130001
          05 OPTION          CHAR(4),         /* PROC OPTIONS.       */ 00140001
          05 RESVED          FIXED BIN(31),   /* RESERVED.           */ 00150001
          05 SEGNAM          CHAR(8),         /* SEGMENT NAME.       */ 00160001
          05 FBLNG           FIXED BIN(31),   /* FEEDBACK LENGTH.    */ 00170001
          05 SENSEG          FIXED BIN(31),   /* SENSITIVE SEGMENTS. */ 00180001
          05 FBAREA          CHAR(50);        /* KEY FEEDBACK AREA.  */ 00190001
