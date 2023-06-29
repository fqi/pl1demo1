0  /*******************************************************************/00010006
   /* DR1NAME:  NAME SSA AND SEGMENT - DRIVER NAME INFORMATION        */00020006
   /*                                                                 */00030006
   /* WHEN    WHO  WHY   WHAT                                         */00040006
   /* ------- ---- ----- -------------------------------------------- */00050006
   /* 90DEC13 GTRO CR507 CLEAN UP CODE                                */00060006
   /*******************************************************************/00070006
0  DCL 1 DR1NAME_SSAE        STATIC,                                    00080006
         2 SEG_NAME          CHAR (08) INIT ('DR1NAME '),               00090006
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00100006
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00110006
         2 LP                CHAR (01) INIT ('('),                      00120006
         2 FILLER            CHAR (08) INIT ('NAMEID  '),               00130006
         2 RO                CHAR (02) INIT (' ='),                     00140006
         2 NAMEID,                                                      00150006
           %INCLUDE DRKNAME;                                            00160006
         2 RP                CHAR (01) INIT (')');                      00170006
0  DCL 1 DR1NAME_SSAU        STATIC,                                    00180006
         2 SEG_NAME          CHAR (08) INIT ('DR1NAME '),               00190006
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00200006
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00210006
         2 UNQUAL            CHAR (01) INIT (' ');                      00220006
1  DCL DR1NAME_HLD           CHAR (109);                                00230006
0  DCL DR1NAME_PTR           PTR;                                       00240006
0  DCL DR1NAME_LENGTH        FIXED BIN(15) INIT(109);                   00250006
0  DCL 1 DR1NAME             UNALIGNED BASED (DR1NAME_PTR),             00260006
         2 NAMEID,                                                      00270006
           %INCLUDE DRKNAME;                                            00280006
           %INCLUDE DRDNAME;                                            00290006
         2 DR1NAME_EOS       CHAR (00);                                 00300006
0  DR1NAME_PTR = ADDR(DR1NAME_HLD);                                     00310006
