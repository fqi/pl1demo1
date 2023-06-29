0  /*******************************************************************/00010005
   /* DSCTRFC:  IMS PARM COUNT VALUES AND FUNCTION CODES              */00020005
   /*                                                                 */00030005
   /* WHEN    WHO  WHY   WHAT                                         */00040005
   /* ------- ---- ----- -------------------------------------------- */00050005
   /* 90DEC12 GTRO CR507 CLEAN UP CODE                                */00060005
   /*******************************************************************/00070005
0  DCL 01 DSCTRFC            STATIC EXTERNAL,                           00080004
          05 ONE             FIXED BIN(31) INIT(1),                     00090003
          05 TWO             FIXED BIN(31) INIT(2),                     00100003
          05 THREE           FIXED BIN(31) INIT(3),                     00110003
          05 FOUR            FIXED BIN(31) INIT(4),                     00120003
          05 FIVE            FIXED BIN(31) INIT(5),                     00130003
          05 SIX             FIXED BIN(31) INIT(6),                     00140003
          05 SEVEN           FIXED BIN(31) INIT(7),                     00150003
          05 EIGHT           FIXED BIN(31) INIT(8),                     00160003
          05 NINE            FIXED BIN(31) INIT(9),                     00170003
          05 TEN             FIXED BIN(31) INIT(10),                    00180003
          05 ELEVEN          FIXED BIN(31) INIT(11),                    00190003
          05 TWELVE          FIXED BIN(31) INIT(12),                    00200003
          05 THIRTEEN        FIXED BIN(31) INIT(13),                    00210003
          05 FOURTEEN        FIXED BIN(31) INIT(14),                    00220003
          05 FIFTEEN         FIXED BIN(31) INIT(15),                    00230003
          05 SIXTEEN         FIXED BIN(31) INIT(16),                    00240003
          05 SEVENTEEN       FIXED BIN(31) INIT(17),                    00250003
          05 EIGHTEEN        FIXED BIN(31) INIT(18),                    00260003
          05 NINETEEN        FIXED BIN(31) INIT(19),                    00270003
          05 TWENTY          FIXED BIN(31) INIT(20),                    00280003
          05 GU              CHAR(4) INIT('GU  '),                      00290003
          05 GN              CHAR(4) INIT('GN  '),                      00300003
          05 GNP             CHAR(4) INIT('GNP '),                      00310003
          05 GHU             CHAR(4) INIT('GHU '),                      00320003
          05 GHN             CHAR(4) INIT('GHN '),                      00330003
          05 GHNP            CHAR(4) INIT('GHNP'),                      00340003
          05 REPL            CHAR(4) INIT('REPL'),                      00350003
          05 ISRT            CHAR(4) INIT('ISRT'),                      00360002
          05 DLET            CHAR(4) INIT('DLET'),                      00370002
          05 DELETE          CHAR(4) INIT('DLET'),                      00380002
          05 PURG            CHAR(4) INIT('PURG'),                      00390002
          05 CMD             CHAR(4) INIT('CMD '),                      00400002
          05 GCMD            CHAR(4) INIT('GCMD'),                      00410002
          05 CHKP            CHAR(4) INIT('CHKP'),                      00420002
          05 XRST            CHAR(4) INIT('XRST'),                      00430002
          05 ROLL            CHAR(4) INIT('ROLL'),                      00440002
          05 DEQ             CHAR(4) INIT('DEQ '),                      00450002
          05 LOG             CHAR(4) INIT('LOG '),                      00460002
          05 STAT            CHAR(4) INIT('STAT'),                      00470002
          05 CHNG            CHAR(4) INIT('CHNG'),                      00480002
          05 OPEN            CHAR(4) INIT('OPEN'),     /* GSAM OPEN  */ 00490002
          05 CLOSE           CHAR(4) INIT('CLSE'),     /* GSAM CLOSE */ 00500002
          05 ABND            CHAR(4) INIT('ABND');                      00510002
0         /*---------------------------------------------------------*/ 00520002
          /* "ABND FUNCTION IS USED BY THE APPLICATION PROGRAM WHEN  */ 00530002
          /* GENERATING AN APPLICATION ABNORMAL TERMINATION. THE     */ 00540002
          /* APPLICATION CAN PLACE A MESSAGE IN THE COMMON AREA      */ 00550002
          /* WHICH WILL BE PRINTED BY THE IMS INNTERFACE ROUTINES.   */ 00560002
          /*                                                         */ 00570002
          /* EX:  CALL DSSMP01 (DSCOMMON,                            */ 00580002
          /*                    ONE,                                 */ 00590002
          /*                    ABND)                                */ 00600002
          /*---------------------------------------------------------*/ 00610002
