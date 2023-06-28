0  /*******************************************************************/00010005
   /* DR1STAT:  STATUS SSA & SEGMENT - LIST OUTSTANDING ACTIONS TAKEN */00020005
   /*           AGAINST A DRIVER.                                     */00030005
   /*                                                                 */00040005
   /* WHEN    WHO  WHY   WHAT                                         */00050005
   /* ------- ---- ----- -------------------------------------------- */00060005
   /* 93MAY06 GTRO GMT001 FEE CODE INCREAS CHANGE FOR FM              */00070011
   /* 90DEC14 GTRO CR507 INITIALIZE SSAE AND DATA AREA                */00071011
   /* 90DEC13 GTRO CR507 CLEAN UP CODE                                */00080006
   /*******************************************************************/00090005
0  DCL 1 DR1STAT_SSAE        STATIC,                                    00100005
         2 SEG_NAME          CHAR (08) INIT ('DR1STAT '),               00110005
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00120005
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00130005
         2 LP                CHAR (01) INIT ('('),                      00140005
         2 FILLER            CHAR (08) INIT ('STATID  '),               00150005
         2 RO                CHAR (02) INIT (' ='),                     00160005
         2 STATID,                                                      00170005
           %INCLUDE DRKSTAT;                                            00180005
         2 RP                CHAR (01) INIT (')');                      00190005
0  DCL 1 DR1STAT_SSAXPND     STATIC,                                    00200005
         2 SEG_NAME          CHAR (08) INIT ('DR1STAT '),               00210005
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00220005
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00230005
         2 LP                CHAR (01) INIT ('('),                      00240005
         2 FILLER            CHAR (08) INIT ('XPND    '),               00250005
         2 RO                CHAR (02) INIT (' ='),                     00260005
         2 SECT              CHAR (01),  /* SECTION                  */ 00270005
         2 NMCD              CHAR (01),  /* NEW MASTER STATUS        */ 00280005
         2 NECD              CHAR (04),  /* NEW EXPANDED STATUS      */ 00290005
         2 RP                CHAR (01) INIT (')');                      00300005
0  DCL 1 DR1STAT_SSAXPND_L   STATIC,                                    00301008
         2 SEG_NAME          CHAR (08) INIT ('DR1STAT '),               00305108
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00305208
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00305308
         2 LP                CHAR (01) INIT ('('),                      00305408
         2 STATUS,                                                      00305508
           3 FILLER          CHAR (08) INIT ('XPND    '),               00305608
           3 RO              CHAR (02) INIT (' ='),                     00305708
           3 SECT            CHAR (01),   /* SECTION                  */00305808
           3 NMCD            CHAR (01),   /* NEW MASTER STATUS        */00305908
           3 NECD            CHAR (04),   /* NEW EXPANDED STATUS      */00306008
         2 CON               CHAR (01) INIT ('&'),                      00306408
         2 REVIEW,                                                      00306508
           3 FILLER          CHAR (08) INIT ('SRDT    '),               00306610
           3 RO              CHAR (02) INIT (' <'),                     00306708
           3 SRDT            FIXED DEC (07,0),  /* STATUS REVIEW DATE */00306809
         2 RP                CHAR (01) INIT (')');                      00309208
0  DCL 1 DR1STAT_SSASECT     STATIC,                                    00310005
         2 SEG_NAME          CHAR (08) INIT ('DR1STAT '),               00320005
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00330005
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00340005
         2 LP                CHAR (01) INIT ('('),                      00350005
         2 FILLER            CHAR (08) INIT ('SECT    '),               00360005
         2 RO                CHAR (02) INIT (' ='),                     00370005
         2 SECT              CHAR (01) INIT ('0'),                      00380005
         2 RP                CHAR (01) INIT (')');                      00390005
0  DCL 1 DR1STAT_SSANMCD     STATIC,                                    00400005
         2 SEG_NAME          CHAR (08) INIT ('DR1STAT '),               00410005
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00420005
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00430005
         2 LP                CHAR (01) INIT ('('),                      00440005
         2 FILLER            CHAR (08) INIT ('NMCD    '),               00450005
         2 RO                CHAR (02) INIT (' ='),                     00460005
         2 NMCD              CHAR (01) INIT ('0'),                      00470005
         2 RP                CHAR (01) INIT (')');                      00480005
0  DCL 1 DR1STAT_SSAR        STATIC,                                    00490005
         2 SEG_NAME          CHAR (08) INIT ('DR1STAT '),               00500005
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00510005
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00520005
         2 LP                CHAR (01) INIT ('('),                      00530005
         2 STATFR,                                                      00540005
           3 FILLER          CHAR (08) INIT ('STATID  '),               00550005
           3 RO              CHAR (02) INIT ('>='),                     00560005
           %INCLUDE DRKSTAT;                                            00570005
         2 CON               CHAR (01) INIT ('&'),                      00580005
         2 STATTO,                                                      00590005
           3 FILLER          CHAR (08) INIT ('STATID  '),               00600005
           3 RO              CHAR (02) INIT ('<='),                     00610005
           %INCLUDE DRKSTAT;                                            00620005
         2 RP                CHAR (01) INIT (')');                      00630005
0  DCL 1 DR1STAT_SSA000M     STATIC,                                    00640005
         2 SEG_NAME          CHAR (08) INIT ('DR1STAT '),               00650005
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00660005
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00670005
         2 LP                CHAR (01) INIT ('('),                      00680005
         2 XPND1,                                                       00690005
           3 FILLER          CHAR (08) INIT ('XPND    '),               00700005
           3 RO              CHAR (02) INIT (' ='),                     00710005
           3 XPND            CHAR (06) INIT ('10000M'),                 00720005
         2 OR                CHAR (01) INIT ('|'),                      00730005
         2 XPND2,                                                       00740005
           3 FILLER          CHAR (08) INIT ('XPND    '),               00750005
           3 RO              CHAR (02) INIT (' ='),                     00760005
           3 XPND            CHAR (06) INIT ('30000M'),                 00770005
         2 RP                CHAR (01) INIT (')');                      00780005
0  DCL 1 DR1STAT_SSA321      STATIC,                                    00790005
         2 SEG_NAME          CHAR (08) INIT ('DR1STAT '),               00800005
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00810005
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00820005
         2 LP                CHAR (01) INIT ('('),                      00830005
         2 XPND1,                                                       00840005
           3 FILLER          CHAR (08) INIT ('XPND    '),               00850005
           3 RO              CHAR (02) INIT (' ='),                     00860005
           3 XPND            CHAR (06) INIT ('11085M'),                 00870005
           3 OR              CHAR (01) INIT ('|'),                      00880005
         2 XPND2,                                                       00890005
           3 FILLER          CHAR (08) INIT ('XPND    '),               00900005
           3 RO              CHAR (02) INIT (' ='),                     00910005
           3 XPND            CHAR (06) INIT ('31083M'),                 00920005
           3 OR              CHAR (01) INIT ('|'),                      00930005
         2 XPND3,                                                       00940005
           3 FILLER          CHAR (08) INIT ('XPND    '),               00950005
           3 RO              CHAR (02) INIT (' ='),                     00960005
           3 XPND            CHAR (06) INIT ('31085M'),                 00970005
           3 OR              CHAR (01) INIT ('|'),                      00980005
         2 XPND4,                                                       00990005
           3 FILLER          CHAR (08) INIT ('XPND    '),               01000005
           3 RO              CHAR (02) INIT (' ='),                     01010005
           3 XPND            CHAR (06) INIT ('33085M'),                 01020005
           3 OR              CHAR (01) INIT ('|'),                      01030005
         2 XPND5,                                                       01040005
           3 FILLER          CHAR (08) INIT ('XPND    '),               01050005
           3 RO              CHAR (02) INIT (' ='),                     01060005
           3 XPND            CHAR (06) INIT ('33NODL'),                 01070005
         2 RP                CHAR (01) INIT (')');                      01080005
0  DCL 1 DR1STAT_SSAFM       STATIC,                         /*GMT001*/ 01081011
         2 SEG_NAME          CHAR (08) INIT ('DR1STAT '),    /*GMT001*/ 01082011
         2 CMD_QUAL          CHAR (01) INIT ('*'),           /*GMT001*/ 01083011
         2 CMD_CODE          CHAR (03) INIT ('---'),         /*GMT001*/ 01084011
         2 LP                CHAR (01) INIT ('('),           /*GMT001*/ 01085011
         2 XPND1,                                            /*GMT001*/ 01086011
           3 FILLER          CHAR (08) INIT ('XPND    '),    /*GMT001*/ 01087011
           3 RO              CHAR (02) INIT (' ='),          /*GMT001*/ 01088011
           3 XPND            CHAR (06) INIT ('300050'),      /*GMT001*/ 01089011
         2 OR1               CHAR (01) INIT ('|'),           /*GMT001*/ 01089112
         2 XPND2,                                            /*GMT001*/ 01089211
           3 FILLER          CHAR (08) INIT ('XPND    '),    /*GMT001*/ 01089311
           3 RO              CHAR (02) INIT (' ='),          /*GMT001*/ 01089411
           3 XPND            CHAR (06) INIT ('300075'),      /*GMT001*/ 01089511
         2 RP                CHAR (01) INIT (')');           /*GMT001*/ 01091111
0  DCL 1 DR1STAT_SSAICBC     STATIC,                                    01092005
         2 SEG_NAME          CHAR (08) INIT ('DR1STAT '),               01100005
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      01110005
         2 CMD_CODE          CHAR (03) INIT ('---'),                    01120005
         2 LP                CHAR (01) INIT ('('),                      01130005
         2 XPND1,                                                       01140005
           3 FILLER          CHAR (08) INIT ('XPND    '),               01150005
           3 RO              CHAR (02) INIT (' ='),                     01160005
           3 XPND            CHAR (06) INIT ('40ICBC'),                 01170005
           3 OR              CHAR (01) INIT ('|'),                      01180005
         2 XPND2,                                                       01190005
           3 FILLER          CHAR (08) INIT ('XPND    '),               01200005
           3 RO              CHAR (02) INIT (' ='),                     01210005
           3 XPND            CHAR (06) INIT ('40ICBM'),                 01220005
           3 OR              CHAR (01) INIT ('|'),                      01230005
         2 XPND3,                                                       01240005
           3 FILLER          CHAR (08) INIT ('XPND    '),               01250005
           3 RO              CHAR (02) INIT (' ='),                     01260005
           3 XPND            CHAR (06) INIT ('40ICBS'),                 01270005
           3 OR              CHAR (01) INIT (')');                      01280005
0  DCL 1 DR1STAT_SSAU        STATIC,                                    01290005
         2 SEG_NAME          CHAR (08) INIT ('DR1STAT '),               01300005
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      01310005
         2 CMD_CODE          CHAR (03) INIT ('---'),                    01320005
         2 UNQUAL            CHAR (01) INIT (' ');                      01330005
1  DCL DR1STAT_HLD           CHAR (14);                                 01340005
0  DCL DR1STAT_PTR           PTR;                                       01350005
0  DCL DR1STAT_LENGTH        FIXED BIN(15) INIT(14);                    01360005
0  DCL 1 DR1STAT             UNALIGNED BASED (DR1STAT_PTR),             01370005
         2 STATID,                                                      01380005
           %INCLUDE DRKSTAT;                                            01390005
         2 DR1STAT_EOS       CHAR (00);                                 01400005
0  DR1STAT_PTR         = ADDR(DR1STAT_HLD);                             01410006
