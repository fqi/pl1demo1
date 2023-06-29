 /* PLIINCL ***********************************************************/00000105
 /* DR1FOTO: PHOTO LICENCE SSA AND SEGMENT                            */00000205
 /* OWNING SYSTEM: MTRH <-- APPLICATION SYSTEM ID OF THIS INCLUDE     */00000305
 /*********************************************************************/00000405
 /*                                                                   */00000505
 /* WHEN       WHO  CR #     WHAT                                     */00000605
 /* ---------- ---- -------- ---------------------------------------- */00000705
 /* 1998-05-04 NKEM C971232  GRADUATED LICENCING PROGRAM              */00000805
 /* 93MAR04    GTRO CR507    CLEAN UP DRIVER'S CODE                   */00060005
 /* 90DEC27    GTRO CR507    CLEAN UP DRIVER'S CODE                   */00061005
 /*********************************************************************/00070005
0  DCL 1 DR1FOTO_SSAE        STATIC,                                    00080001
         2 SEG_NAME          CHAR (08) INIT ('DR1FOTO '),               00090001
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00100001
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00110001
         2 LP                CHAR (01) INIT ('('),                      00120001
         2 FILLER            CHAR (08) INIT ('FOTOID  '),               00130001
         2 RO                CHAR (02) INIT (' ='),                     00140001
         2 FOTOID,                                                      00150001
           %INCLUDE DRKFOTO;                                            00160001
         2 RP                CHAR (01) INIT (')');                      00170001
0  DCL 1 DR1FOTO_SSAS        STATIC,                                    00180001
         2 SEG_NAME          CHAR (08) INIT ('DR1FOTO '),               00190001
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00200001
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00210001
         2 LP                CHAR (01) INIT ('('),                      00220001
         2 FILL1             CHAR (08) INIT ('FOTOID  '),               00230001
         2 RO1               CHAR (02) INIT (' ='),                     00240001
         2 FOTOID,                                                      00250001
           %INCLUDE DRKFOTO;                                            00260001
         2 AND               CHAR (01) INIT ('&'),                      00270001
         2 FILL2             CHAR (08) INIT ('LICD    '),               00280001
         2 RO2               CHAR (02) INIT (' ='),                     00290001
         2 LICD              CHAR (01) INIT (' '),                      00300001
         2 RP                CHAR (01) INIT (')');                      00310001
0  DCL 1 DR1FOTO_SSAE_D      STATIC,                                    00320001
         2 SEG_NAME          CHAR (08) INIT ('DR1FOTO '),               00330001
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00340001
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00350001
         2 LP                CHAR (01) INIT ('('),                      00360001
         2 ORIG,                                                        00370001
           3 FILLER          CHAR (08) INIT ('LINO    '),               00380001
           3 RO              CHAR (02) INIT (' ='),                     00390001
           3 LINO            CHAR (07) INIT ('O DN RQ'),                00400001
         2 OR1               CHAR (01) INIT ('|'),                      00410001
         2 INST,                                                        00420001
           3 FILLER          CHAR (08) INIT ('LINO    '),               00430001
           3 RO              CHAR (02) INIT (' ='),                     00440001
           3 LINO            CHAR (07) INIT ('L DN RQ'),                00450001
         2 OR2               CHAR (01) INIT ('|'),                      00460001
         2 REN,                                                         00470001
           3 FILLER          CHAR (08) INIT ('LINO    '),               00480001
           3 RO              CHAR (02) INIT (' ='),                     00490001
           3 LINO            CHAR (07) INIT ('R DN RQ'),                00500001
         2 OR3               CHAR (01) INIT ('|'),                      00510001
         2 DUPL,                                                        00520001
           3 FILLER          CHAR (08) INIT ('LINO    '),               00530001
           3 RO              CHAR (02) INIT (' ='),                     00540001
           3 LINO            CHAR (07) INIT ('D DN RQ'),                00550001
         2 OR4               CHAR (01) INIT ('|'),                      00550104
         2 INIT,                                                        00550204
           3 FILLER          CHAR (08) INIT ('LINO    '),               00550304
           3 RO              CHAR (02) INIT (' ='),                     00550404
           3 LINO            CHAR (07) INIT ('I DN RQ'),                00550504
         2 OR5               CHAR (01) INIT ('|'),                      00550604
         2 CONT,                                                        00550704
           3 FILLER          CHAR (08) INIT ('LINO    '),               00550804
           3 RO              CHAR (02) INIT (' ='),                     00550904
           3 LINO            CHAR (07) INIT ('C DN RQ'),                00551004
         2 OR6               CHAR (01) INIT ('|'),                      00551104
         2 TWIN,                                                        00552004
           3 FILLER          CHAR (08) INIT ('LINO    '),               00553004
           3 RO              CHAR (02) INIT (' ='),                     00554004
           3 LINO            CHAR (07) INIT ('T DN RQ'),                00555004
         2 RP                CHAR (01) INIT (')');                      00560001
0  DCL 1 DR1FOTO_SSAE_T      STATIC,                                    00570001
         2 SEG_NAME          CHAR (08) INIT ('DR1FOTO '),               00580001
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00590001
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00600001
         2 LP                CHAR (01) INIT ('('),                      00610001
         2 FILLER            CHAR (08) INIT ('LICD    '),               00620001
         2 RO                CHAR (02) INIT (' ='),                     00630001
         2 LITP              CHAR (01) INIT ('O'),                      00640001
         2 RP                CHAR (01) INIT (')');                      00650001
0  DCL 1 DR1FOTO_SSAE_V      STATIC,                                    00651003
         2 SEG_NAME          CHAR (08) INIT ('DR1FOTO '),               00652003
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00653003
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00654003
         2 LP                CHAR (01) INIT ('('),                      00655003
         2 FILLER            CHAR (08) INIT ('LICD    '),               00656003
         2 RO                CHAR (02) INIT (' ='),                     00657003
         2 LITP              CHAR (01) INIT ('L'),                      00658003
         2 RP                CHAR (01) INIT (')');                      00659003
0  DCL 1 DR1FOTO_SSAE_L      STATIC,                                    00660001
         2 SEG_NAME          CHAR (08) INIT ('DR1FOTO '),               00670001
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00680001
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00690001
         2 LP                CHAR (01) INIT ('('),                      00700001
         2 FILL1             CHAR (08) INIT ('LICD    '),               00710001
         2 RO1               CHAR (02) INIT (' ='),                     00720001
         2 LIC1              CHAR (01) INIT ('O'),                      00730001
         2 OR1               CHAR (01) INIT ('|'),                      00740001
         2 FILL2             CHAR (08) INIT ('LICD    '),               00750001
         2 RO2               CHAR (02) INIT (' ='),                     00760001
         2 LIC2              CHAR (01) INIT ('R'),                      00770001
         2 OR2               CHAR (01) INIT ('|'),                      00780001
         2 FILL3             CHAR (08) INIT ('LICD    '),               00790001
         2 RO3               CHAR (02) INIT (' ='),                     00800001
         2 LIC3              CHAR (01) INIT ('D'),                      00810001
         2 RP                CHAR (01) INIT (')');                      00820001
0  DCL 1 DR1FOTO_SSAE_G      STATIC,                                    00821006
         2 SEG_NAME          CHAR (08) INIT ('DR1FOTO '),               00822006
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00823006
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00824006
         2 LP                CHAR (01) INIT ('('),                      00825006
         2 FILL1             CHAR (08) INIT ('LICD    '),               00826006
         2 RO1               CHAR (02) INIT (' ='),                     00827006
         2 LIC1              CHAR (01) INIT ('L'),                      00828006
         2 OR1               CHAR (01) INIT ('|'),                      00829006
         2 FILL2             CHAR (08) INIT ('LICD    '),               00829106
         2 RO2               CHAR (02) INIT (' ='),                     00829206
         2 LIC2              CHAR (01) INIT ('I'),                      00829306
         2 OR2               CHAR (01) INIT ('|'),                      00829406
         2 FILL3             CHAR (08) INIT ('LICD    '),               00829506
         2 RO3               CHAR (02) INIT (' ='),                     00829606
         2 LIC3              CHAR (01) INIT ('T'),                      00829706
         2 OR3               CHAR (01) INIT ('|'),                      00829806
         2 FILL4             CHAR (08) INIT ('LICD    '),               00829906
         2 RO4               CHAR (02) INIT (' ='),                     00830006
         2 LIC4              CHAR (01) INIT ('C'),                      00830106
         2 RP                CHAR (01) INIT (')');                      00830206
0  DCL 1 DR1FOTO_SSAU        STATIC,                                    00831001
         2 SEG_NAME          CHAR (08) INIT ('DR1FOTO '),               00840001
         2 CMD_QUAL          CHAR (01) INIT ('*'),                      00850001
         2 CMD_CODE          CHAR (03) INIT ('---'),                    00860001
         2 UNQUAL            CHAR (01) INIT (' ');                      00870001
1  DCL DR1FOTO_HLD           CHAR (31);                                 00880001
0  DCL DR1FOTO_PTR           PTR;                                       00890001
0  DCL DR1FOTO_LENGTH        FIXED BIN(15) INIT(31);                    00900001
0  DCL 1 DR1FOTO             UNALIGNED BASED (DR1FOTO_PTR),             00910001
         2 FOTOID,                                                      00920001
           %INCLUDE DRKFOTO;                                            00930001
         %INCLUDE DRDFOTO;                                              00940001
         2 DR1FOTO_EOS       CHAR(00);                                  00950001
0  DR1FOTO_PTR         = ADDR(DR1FOTO_HLD);                             00960001
