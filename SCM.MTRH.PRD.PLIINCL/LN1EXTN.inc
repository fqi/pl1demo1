0  /*******************************************************************/00010002
   /* LN1EXTN:  LINE EXTENSION SSA & SEGMENT                          */00020002
   /*                                                                 */00030002
   /* WHEN    WHO  WHY   WHAT                                         */00040002
   /* ------- ---- ----- -------------------------------------------- */00050002
   /* 90DEC13 GTRO CR507 CLEAN UP DRIVER'S CODE                       */00060002
   /* 90DEC14 GTRO CR507 INITIALIZE DATA AREAS                        */00070003
   /*******************************************************************/00080002
0  DCL 1 LN1EXTN_SSAE        STATIC,                                    00090002
         2 SEG_NAME          CHAR (08) INIT ('LN1EXTN '),               00100002
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00110002
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00120002
         2 LP                CHAR (01) INIT ('('),                      00130002
         2 FILLER            CHAR (08) INIT ('EXTNID  '),               00140002
         2 RO                CHAR (02) INIT (' ='),                     00150002
         2 EXTNID,                                                      00160002
           %INCLUDE LNKEXTN;                                            00170002
         2 RP                CHAR (01) INIT (')');                      00180002
0  DCL 1 LN1EXTN_SSAU        STATIC,                                    00190002
         2 SEG_NAME          CHAR (08) INIT ('LN1EXTN '),               00200002
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00210002
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00220002
         2 UNQUAL            CHAR (01) INIT (' ');                      00230002
1  DCL LN1EXTN_HLD           CHAR (50);                                 00240002
0  DCL LN1EXTN_PTR           PTR;                                       00250002
0  DCL LN1EXTN_LENGTH        FIXED BIN(15) INIT(46);                    00260002
0  DCL 1 LN1EXTN             UNALIGNED BASED (LN1EXTN_PTR),             00270002
         2 EXTNID,                                                      00280002
           %INCLUDE LNKEXTN;                                            00290002
           %INCLUDE LNDEXTN;                                            00300002
         2 LN1EXTN_EOS       CHAR (01);                                 00310002
0  LN1EXTN_PTR         = ADDR(LN1EXTN_HLD);                             00320003
