 /* PLIINCL ***********************************************************/
 /* DLIRC: DLI Return Codes                                           */
 /* OWNING SYSTEM: DSSM - Driver Licencing System                     */
 /*********************************************************************/
 /*                                                                   */
 /* WHEN       WHO  CR #     WHAT                                     */
 /* ---------- ---- -------- ---------------------------------------- */
 /* 2006-08-21 NK   C16752   ORIGINAL                                 */
 /*********************************************************************/
 DCL 1 DLIRC STATIC UNALIGNED,
       /* Call was completed successfully.                          */
       3 HEX_0000 FIXED BINARY(15,0) INIT(0),

       /* Call was completed with information.                      */
       3 HEX_0004 FIXED BINARY(15,0) INIT(4),

       /* Call was completed with warning.                          */
       3 HEX_0008 FIXED BINARY(15,0) INIT(8),

       /* An error was detected by the QCF routines.                */
       3 HEX_00F0 FIXED BINARY(15,0) INIT(252),

       /* Call was completed with exception.                        */
       3 HEX_0100 FIXED BINARY(15,0) INIT(256),

       /* Call incomplete -- application error.                     */
       3 HEX_0104 FIXED BINARY(15,0) INIT(260),

       /* Call incomplete -- system error.                          */
       3 HEX_0108 FIXED BINARY(15,0) INIT(264),

       /* Call incomplete -- unavailable data.                      */
       3 HEX_010C FIXED BINARY(15,0) INIT(268),

       /* Call incomplete -- authorization error.                   */
       3 HEX_0110 FIXED BINARY(15,0) INIT(272),

       /* PCB status code analysis required.                        */
       3 HEX_0900 FIXED BIN(15) INIT(2304);
