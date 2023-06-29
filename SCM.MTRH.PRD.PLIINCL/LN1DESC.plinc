0  /*******************************************************************/00010005
   /* LN1DESC:  LINE COMMON DESCRIPTION SSA & SEGMENT                 */00020005
   /*                                                                 */00030005
   /* WHEN    WHO  WHY   WHAT                                         */00040005
   /* ------- ---- ----- -------------------------------------------- */00050005
   /* 90DEC14 GTRO CR507 INITIALIZE LN1DESC_SSAE AND LN1DESC DATA     */00060006
   /* 90DEC13 GTRO CR507 CLEAN UP DRIVER'S CODE                       */00070006
   /*******************************************************************/00080005
0  DCL 1 LN1DESC_SSAE        STATIC,                                    00090005
         2 SEG_NAME          CHAR (08) INIT ('LN1DESC '),               00100005
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00110005
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00120005
         2 LP                CHAR (01) INIT ('('),                      00130005
         2 FILLER            CHAR (08) INIT ('DESCID  '),               00140005
         2 RO                CHAR (02) INIT (' ='),                     00150005
         2 DESCID,                                                      00160005
           %INCLUDE LNKDESC;                                            00170005
         2 RP                CHAR (01) INIT (')');                      00180005
0  DCL 1 LN1DESC_SSAU        STATIC,                                    00190005
         2 SEG_NAME          CHAR (08) INIT ('LN1DESC '),               00200005
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00210005
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00220005
         2 UNQUAL            CHAR (01) INIT (' ');                      00230005
1  DCL LN1DESC_HLD           CHAR (100);                                00240005
0  DCL LN1DESC_PTR           PTR;                                       00250005
0  DCL LN1DESC_LENGTH        FIXED BIN(15) INIT(59);                    00260005
0  DCL 1 LN1DESC             UNALIGNED BASED (LN1DESC_PTR),             00270005
         2 DESCID,                                                      00280005
           %INCLUDE LNKDESC;                                            00290005
           %INCLUDE LNDDESC;                                            00300005
         2 LN1DESC_EOS       CHAR (01);                                 00310005
0  LN1DESC_PTR         = ADDR(LN1DESC_HLD);                             00320006
