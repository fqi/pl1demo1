0  /*******************************************************************/DR1SUSP
   /* DR1SUSP:  SUSPENSION SSA AND SEGMENT                            */DR1SUSP
   /*                                                                 */DR1SUSP
   /* WHEN     WHO  TASK # WHAT                                       */DR1SUSP
   /* -------- ---- ------ ------------------------------------------ */DR1SUSP
   /* 93/01/21 GTRO 000662 ADD SSAE2 FOR IPRE RELEASE 4.0             */DR1SUSP
   /* 92/01/20 KRIT        CHANGE DR1SUSP_SSAUACT TO > FROM >=        */DR1SUSP
   /* 90/12/18 LYEE CR507  CLEAN UP DRIVER'S CODE                     */DR1SUSP
   /*******************************************************************/DR1SUSP
0  DCL  1 DR1SUSP_SSAE    STATIC,                                       DR1SUSP
          2 SEG_NAME      CHAR (08) INIT ('DR1SUSP '),                  DR1SUSP
          2 CMD_QUAL      CHAR (01) INIT ('*'),                         DR1SUSP
          2 CMD_CODE      CHAR (03) INIT ('---'),                       DR1SUSP
          2 LP            CHAR (01) INIT ('('),                         DR1SUSP
          2 FILLER        CHAR (08) INIT ('SUSPID  '),                  DR1SUSP
          2 RO            CHAR (02) INIT (' ='),                        DR1SUSP
          2 SUSPID,                                                     DR1SUSP
            %INCLUDE DRKSUSP;                                           DR1SUSP
          2 RP            CHAR (01) INIT (')');                         DR1SUSP
0  DCL  1 DR1SUSP_SSAE2   STATIC,                                       DR1SUSP
          2 SEG_NAME      CHAR (08) INIT ('DR1SUSP '),                  DR1SUSP
          2 CMD_QUAL      CHAR (01) INIT ('*'),                         DR1SUSP
          2 CMD_CODE      CHAR (03) INIT ('---'),                       DR1SUSP
          2 LP            CHAR (01) INIT ('('),                         DR1SUSP
          2 FILLER        CHAR (08) INIT ('SUSPID  '),                  DR1SUSP
          2 RO            CHAR (02) INIT ('<='),                        DR1SUSP
          2 SUSPID,                                                     DR1SUSP
            %INCLUDE DRKSUSP;                                           DR1SUSP
          3 AND           CHAR (01) INIT ('&'),                         DR1SUSP
          2 FILLER2       CHAR (08) INIT ('DLDT    '),                  DR1SUSP
          2 RO2           CHAR (02) INIT (' ='),                        DR1SUSP
          2 DLDT          FIXED DEC (7,0) INIT (0),                     DR1SUSP
          2 RP            CHAR (01) INIT (')');                         DR1SUSP
0  DCL  1 DR1SUSP_SSAU    STATIC,                                       DR1SUSP
          2 SEG_NAME      CHAR (08) INIT ('DR1SUSP '),                  DR1SUSP
          2 CMD_QUAL      CHAR (01) INIT ('*'),                         DR1SUSP
          2 CMD_CODE      CHAR (03) INIT ('---'),                       DR1SUSP
          2 UNQUAL        CHAR (01) INIT (' ');                         DR1SUSP
0  DCL  1 DR1SUSP_SSAUACT STATIC,                                       DR1SUSP
          2 SEG_NAME      CHAR (08) INIT ('DR1SUSP '),                  DR1SUSP
          2 CMD_QUAL      CHAR (01) INIT ('*'),                         DR1SUSP
          2 CMD_CODE      CHAR (03) INIT ('---'),                       DR1SUSP
          2 LP            CHAR (01) INIT ('('),                         DR1SUSP
          2 NIL,                                                        DR1SUSP
            3 FILLER1     CHAR (08) INIT ('SRDT    '),                  DR1SUSP
            3 RO1         CHAR (02) INIT (' ='),                        DR1SUSP
            3 SRDT        FIXED DEC (7,0) INIT (0),                     DR1SUSP
            3 AND         CHAR (01) INIT ('&'),                         DR1SUSP
            3 FILLER2     CHAR (08) INIT ('DLDT    '),                  DR1SUSP
            3 RO2         CHAR (02) INIT (' ='),                        DR1SUSP
            3 DLDT        FIXED DEC (7,0) INIT (0),                     DR1SUSP
          2 OR1           CHAR (01) INIT ('|'),                         DR1SUSP
          2 ACT,                                                        DR1SUSP
            3 FILLER1     CHAR (08) INIT ('SRDT    '),                  DR1SUSP
            3 RO1         CHAR (02) INIT (' >'),                        DR1SUSP
            3 SYDT_LESS_5 FIXED DEC (7,0) INIT (0),                     DR1SUSP
            3 AND         CHAR (01) INIT ('&'),                         DR1SUSP
            3 FILLER2     CHAR (08) INIT ('DLDT    '),                  DR1SUSP
            3 RO2         CHAR (02) INIT (' ='),                        DR1SUSP
            3 DLDT        FIXED DEC (7,0) INIT (0),                     DR1SUSP
          2 OR2           CHAR (01) INIT ('|'),                         DR1SUSP
          2 DEL,                                                        DR1SUSP
            3 FILLER1     CHAR (08) INIT ('SRDT    '),                  DR1SUSP
            3 RO1         CHAR (02) INIT (' >'),                        DR1SUSP
            3 SYDT_LESS_5 FIXED DEC (7,0) INIT (0),                     DR1SUSP
            3 AND         CHAR (01) INIT ('&'),                         DR1SUSP
            3 FILLER2     CHAR (08) INIT ('DLDT    '),                  DR1SUSP
            3 RO2         CHAR (02) INIT (' ='),                        DR1SUSP
            3 SYDT        FIXED DEC (7,0) INIT (0),                     DR1SUSP
          2 RP            CHAR (01) INIT (')');                         DR1SUSP
0  DCL  1 DR1SUSP_SSAUACC STATIC,                                       DR1SUSP
          2 SEG_NAME      CHAR (08) INIT ('DR1SUSP '),                  DR1SUSP
          2 CMD_QUAL      CHAR (01) INIT ('*'),                         DR1SUSP
          2 CMD_CODE      CHAR (03) INIT ('---'),                       DR1SUSP
          2 LP            CHAR (01) INIT ('('),                         DR1SUSP
          2 FILLER1       CHAR (08) INIT ('DLDT    '),                  DR1SUSP
          2 RO1           CHAR (02) INIT (' ='),                        DR1SUSP
          2 DLDT          FIXED DEC (7,0) INIT (0),                     DR1SUSP
          2 CONT2         CHAR (01) INIT ('&'),                         DR1SUSP
          2 FILLER2       CHAR (08) INIT ('SSDT    '),                  DR1SUSP
          2 RO2           CHAR (02) INIT ('< '),                        DR1SUSP
          2 SSDT          FIXED DEC (7,0) INIT (0),                     DR1SUSP
          2 CONT3         CHAR (01) INIT ('&'),                         DR1SUSP
          2 FILLER3       CHAR (08) INIT ('SRDT    '),                  DR1SUSP
          2 RO3           CHAR (02) INIT ('> '),                        DR1SUSP
          2 SRDT          FIXED DEC (7,0) INIT (0),                     DR1SUSP
          2 RP            CHAR (01) INIT (')');                         DR1SUSP
0  DCL  1 DR1SUSP_SSAUAUD STATIC,                                       DR1SUSP
          2 SEG_NAME      CHAR (08) INIT ('DR1SUSP '),                  DR1SUSP
          2 CMD_QUAL      CHAR (01) INIT ('*'),                         DR1SUSP
          2 CMD_CODE      CHAR (03) INIT ('---'),                       DR1SUSP
          2 LP            CHAR (01) INIT ('('),                         DR1SUSP
          2 ACT,                                                        DR1SUSP
            3 FILLER1     CHAR (08) INIT ('ADDT    '),                  DR1SUSP
            3 RO1         CHAR (02) INIT ('<='),                        DR1SUSP
            3 ADDT        FIXED DEC (7,0) INIT (0),                     DR1SUSP
            3 CONT        CHAR (01) INIT ('&'),                         DR1SUSP
            3 FILLER2     CHAR (08) INIT ('DLDT    '),                  DR1SUSP
            3 RO2         CHAR (02) INIT (' ='),                        DR1SUSP
            3 DLDT        FIXED DEC (7,0) INIT (0),                     DR1SUSP
          2 OR            CHAR (01) INIT ('|'),                         DR1SUSP
          2 DEL,                                                        DR1SUSP
            3 FILLER1     CHAR (08) INIT ('ADDT    '),                  DR1SUSP
            3 RO1         CHAR (02) INIT ('<='),                        DR1SUSP
            3 ADDT        FIXED DEC (7,0) INIT (0),                     DR1SUSP
            3 CONT        CHAR (01) INIT ('&'),                         DR1SUSP
            3 FILLER2     CHAR (08) INIT ('DLDT    '),                  DR1SUSP
            3 RO2         CHAR (02) INIT ('>='),                        DR1SUSP
            3 DLDT        FIXED DEC (7,0) INIT (0),                     DR1SUSP
          2 RP            CHAR (01) INIT (')');                         DR1SUSP
0  DCL  1 DR1SUSP_SSAUCER STATIC,                                       DR1SUSP
          2 SEG_NAME      CHAR (08) INIT ('DR1SUSP '),                  DR1SUSP
          2 CMD_QUAL      CHAR (01) INIT ('*'),                         DR1SUSP
          2 CMD_CODE      CHAR (03) INIT ('---'),                       DR1SUSP
          2 LP            CHAR (01) INIT ('('),                         DR1SUSP
          2 SET1,                                                       DR1SUSP
            3 FLDNAM1       CHAR (08) INIT ('DLDT    '),                DR1SUSP
            3 RO1           CHAR (02) INIT (' ='),                      DR1SUSP
            3 DLDT          FIXED DEC (7,0) INIT (0),                   DR1SUSP
            3 AND1          CHAR (01) INIT ('&'),                       DR1SUSP
            3 FLDNAM2       CHAR (08) INIT ('SSDT    '),                DR1SUSP
            3 RO2           CHAR (02) INIT ('< '),                      DR1SUSP
            3 SSDT          FIXED DEC (7,0) INIT (0),                   DR1SUSP
            3 AND2          CHAR (01) INIT ('&'),                       DR1SUSP
            3 FLDNAM3       CHAR (08) INIT ('SRDT    '),                DR1SUSP
            3 RO3           CHAR (02) INIT ('> '),                      DR1SUSP
            3 SRDT          FIXED DEC (7,0) INIT (0),                   DR1SUSP
          2 OR              CHAR (01) INIT ('|'),                       DR1SUSP
          2 SET2,                                                       DR1SUSP
            3 FLDNAM1       CHAR (08) INIT ('DLDT    '),                DR1SUSP
            3 RO1           CHAR (02) INIT (' ='),                      DR1SUSP
            3 DLDT          FIXED DEC (7,0) INIT (0),                   DR1SUSP
            3 AND1          CHAR (01) INIT ('&'),                       DR1SUSP
            3 FLDNAM2       CHAR (08) INIT ('SSDT    '),                DR1SUSP
            3 RO2           CHAR (02) INIT ('< '),                      DR1SUSP
            3 SSDT          FIXED DEC (7,0) INIT (0),                   DR1SUSP
            3 AND2          CHAR (01) INIT ('&'),                       DR1SUSP
            3 FLDNAM3       CHAR (08) INIT ('SRDT    '),                DR1SUSP
            3 RO3           CHAR (02) INIT (' ='),                      DR1SUSP
            3 SRDT          FIXED DEC (7,0) INIT (0),                   DR1SUSP
          2 RP            CHAR (01) INIT (')');                         DR1SUSP
0  DCL  DR1SUSP_HLD       CHAR (22);                                    DR1SUSP
   DCL  DR1SUSP_PTR       PTR;                                          DR1SUSP
   DCL  DR1SUSP_LENGTH    FIXED BIN(15) INIT(22);                       DR1SUSP
0  DCL  1 DR1SUSP         UNALIGNED BASED (DR1SUSP_PTR),                DR1SUSP
          2 SUSPID,                                                     DR1SUSP
            %INCLUDE DRKSUSP;                                           DR1SUSP
            %INCLUDE DRDSUSP;                                           DR1SUSP
          2 DR1SUSP_EOS   CHAR (00);                                    DR1SUSP
0  DR1SUSP_PTR         = ADDR(DR1SUSP_HLD);                             DR1SUSP
