0  /*******************************************************************/00010014
   /* DR1MST :  DRIVER LIC # SSA & SEGMENT. RECORD INFO THAT UNIQUELY */00020014
   /*           IDENTIFIES A DRIVER.                                  */00030014
   /*                                                                 */00040014
   /* WHEN    WHO  WHY   WHAT                                         */00050014
   /* ------- ---- ----- -------------------------------------------- */00060014
   /* 90DEC14 GTRO CR507 INITIALIZE SSAE AND DATA AREA                */00070016
   /* 90DEC13 GTRO CR507 CLEAN UP CODE                                */00080016
   /* ??????? ???? REL12 NIL AND NILP FIELDS ADDED                    */00090015
   /* ??????? ???? REL11 HGHT, WGHT, EYEC, HAIIR, PID1, PID2, SID1,   */00100014
   /*              AND SID2 FIELDS ADDED                              */00110014
   /* ??????? ???? REL10 PCLS AND DREQ FIELDS ADDED                   */00120014
   /*******************************************************************/00130014
0  DCL 1 DR1MST_SSAE         STATIC,                                    00140014
         2 SEG_NAME          CHAR (08) INIT ('DR1MST  '),               00150014
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00160014
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00170014
         2 LP                CHAR (01) INIT ('('),                      00180014
         2 FILLER            CHAR (08) INIT ('MSTID   '),               00190014
         2 RO                CHAR (02) INIT (' ='),                     00200014
         2 MSTID,                                                       00210014
           %INCLUDE DRKMST;                                             00220014
         2 RP                CHAR (01) INIT (')');                      00230014
0  DCL 1 DR1MST_SSAS         STATIC,                                    00240014
         2 SEG_NAME          CHAR (08) INIT ('DR1MST  '),               00250014
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00260014
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00270014
         2 LP                CHAR (01) INIT ('('),                      00280014
         2 MCDT,                                                        00290014
           3 FROM,                                                      00300014
             4 FILLER        CHAR (08) INIT ('MCDT    '),               00310014
             4 RO            CHAR (02) INIT ('>='),                     00320014
             4 DATE          FIXED DEC (07,0),                          00330014
           3 AND             CHAR (01) INIT ('&'),                      00340014
           3 TO,                                                        00350014
             4 FILLER        CHAR (08) INIT ('MCDT    '),               00360014
             4 RO            CHAR (02) INIT ('<='),                     00370014
             4 DATE          FIXED DEC (07,0),                          00380014
           3 OR              CHAR (01) INIT ('|'),                      00390014
         2 RRDT1,                                                       00400014
           3 FROM,                                                      00410014
             4 FILLER        CHAR (08) INIT ('RRDT    '),               00420014
             4 RO            CHAR (02) INIT ('>='),                     00430014
             4 DATE          FIXED DEC (07,0),                          00440014
           3 AND             CHAR (01) INIT ('&'),                      00450014
           3 TO,                                                        00460014
             4 FILLER        CHAR (08) INIT ('RRDT    '),               00470014
             4 RO            CHAR (02) INIT ('<='),                     00480014
             4 DATE          FIXED DEC (07,0),                          00490014
           3 OR              CHAR (01) INIT ('|'),                      00500014
         2 RRDT2,                                                       00510014
           3 FROM,                                                      00520014
             4 FILLER        CHAR (08) INIT ('RRDT    '),               00530014
             4 RO            CHAR (02) INIT ('>='),                     00540014
             4 DATE          FIXED DEC (07,0),                          00550014
           3 AND             CHAR (01) INIT ('&'),                      00560014
           3 TO,                                                        00570014
             4 FILLER        CHAR (08) INIT ('RRDT    '),               00580014
             4 RO            CHAR (02) INIT ('<='),                     00590014
             4 DATE          FIXED DEC (07,0),                          00600014
           3 OR              CHAR (01) INIT ('|'),                      00610014
         2 RRDT3,                                                       00620014
           3 FROM,                                                      00630014
             4 FILLER        CHAR (08) INIT ('RRDT    '),               00640014
             4 RO            CHAR (02) INIT ('>='),                     00650014
             4 DATE          FIXED DEC (07,0),                          00660014
           3 AND             CHAR (01) INIT ('&'),                      00670014
           3 TO,                                                        00680014
             4 FILLER        CHAR (08) INIT ('RRDT    '),               00690014
             4 RO            CHAR (02) INIT ('<='),                     00700014
             4 DATE          FIXED DEC (07,0),                          00710014
           3 OR              CHAR (01) INIT ('|');                      00720014
0  DCL 1 DR1MST_SSAU         STATIC,                                    00730014
         2 SEG_NAME          CHAR (08) INIT ('DR1MST  '),               00740014
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00750014
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00760014
         2 UNQUAL            CHAR (01) INIT (' ');                      00770014
1  /*----------------------------------------------------------------*/ 00780014
   /* NOTE: WHENEVER THE LENGTH OF THE MASTER SEGMENT CHANGES,       */ 00790014
   /*       DR1MST_HLD MUST BE CHANGED TO BE LARGE ENOUGH TO HOLD    */ 00800014
   /*       DR1MST AND DR1NAME, FOR QUITE OFTEN A PATH CALL IS USED  */ 00810014
   /*       AND HELD IN THIS BUFFER AREA                             */ 00820014
   /*----------------------------------------------------------------*/ 00830014
0  DCL DR1MST_HLD            CHAR (600);                                00840014
0  DCL DR1MST_PTR            PTR;                                       00850014
0  DCL DR1MST_LENGTH         FIXED BIN(31) INIT(355);                   00860014
0  DCL 1 DR1MST              UNALIGNED BASED (DR1MST_PTR),              00870014
         2 MSTID,                                                       00880014
           %INCLUDE DRKMST;                                             00890014
           %INCLUDE DRDMST;                                             00900014
         2 DR1MST_EOS    CHAR (00);                                     00910014
0  DR1MST_PTR        = ADDR(DR1MST_HLD);                                00920016
