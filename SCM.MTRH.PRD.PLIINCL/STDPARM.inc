 /* PLIINCL ***********************************************************/
 /* STDPARM: STANDARD LITERALS FOR IMS PROGRAMS                       */
 /* OWNING SYSTEM: MTRH <-- APPLICATION SYSTEM ID OF THIS INCLUDE     */
 /*********************************************************************/
 /*                                                                   */
 /* WHEN       WHO  ID     WHAT                                       */
 /* ---------- ---- ------ ------------------------------------------ */
 /* 2007-07-20 NK          ADD ROLB                                   */
 /* 1996-10-11 GTRO GMT001 STANDARDIZE                                */
 /* 1991-08-27 GTRO CR200  ORIGINAL - SEE MOTOR CARRIER CALL REPORT   */
 /*********************************************************************/
 DCL ONE                   FIXED BIN (31) INIT (01) STATIC;
 DCL TWO                   FIXED BIN (31) INIT (02) STATIC;
 DCL THREE                 FIXED BIN (31) INIT (03) STATIC;
 DCL FOUR                  FIXED BIN (31) INIT (04) STATIC;
 DCL FIVE                  FIXED BIN (31) INIT (05) STATIC;
 DCL SIX                   FIXED BIN (31) INIT (06) STATIC;
 DCL SEVEN                 FIXED BIN (31) INIT (07) STATIC;
 DCL EIGHT                 FIXED BIN (31) INIT (08) STATIC;
 DCL NINE                  FIXED BIN (31) INIT (09) STATIC;
 DCL TEN                   FIXED BIN (31) INIT (10) STATIC;

 DCL ABND                  CHAR (4) INIT ('ABND') STATIC;
 DCL CHKP                  CHAR (4) INIT ('CHKP') STATIC;
 DCL CHNG                  CHAR (4) INIT ('CHNG') STATIC;
 DCL CLOSE                 CHAR (4) INIT ('CLSE') STATIC;
 DCL DEQ                   CHAR (4) INIT ('DEQ ') STATIC;
 DCL DLET                  CHAR (4) INIT ('DLET') STATIC;
 DCL GHN                   CHAR (4) INIT ('GHN ') STATIC;
 DCL GHNP                  CHAR (4) INIT ('GHNP') STATIC;
 DCL GHU                   CHAR (4) INIT ('GHU ') STATIC;
 DCL GN                    CHAR (4) INIT ('GN  ') STATIC;
 DCL GNP                   CHAR (4) INIT ('GNP ') STATIC;
 DCL GU                    CHAR (4) INIT ('GU  ') STATIC;
 DCL INIT                  CHAR (4) INIT ('INIT') STATIC;
 DCL ISRT                  CHAR (4) INIT ('ISRT') STATIC;
 DCL LOG                   CHAR (4) INIT ('LOG ') STATIC;
 DCL OPEN                  CHAR (4) INIT ('OPEN') STATIC;
 DCL PURG                  CHAR (4) INIT ('PURG') STATIC;
 DCL REPL                  CHAR (4) INIT ('REPL') STATIC;
 DCL ROLB                  CHAR (4) INIT ('ROLB') STATIC;
 DCL ROLL                  CHAR (4) INIT ('ROLL') STATIC;
 DCL XRST                  CHAR (4) INIT ('XRST') STATIC;
