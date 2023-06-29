0/*********************************************************************/
 /* DTSYSDTP: DETERMINE AND FORMAT THE SYSTEM DATE                    */
 /*********************************************************************/
 /*                                                                   */
 /* WHEN       WHO  ID     WHAT                                       */
 /* ---------- ---- ------ ------------------------------------------ */
 /* 1998-02-25 HJB  Y2K    ORIGINAL                                   */
 /*********************************************************************/
 DCL DTSYSDT_STR          CHAR(48);
 DCL 1 DTSYSDT_WORK       BASED(DTSYSDT_PTR),
       2 INPUT_DATA,
         3 OUTPUT_FORMAT      CHAR(02),
       2 OUTPUT_DATA,
         3 OUTPUT_DATE       CHAR(20),
         3 OUTPUT_DATE_JUL   PIC'(7)9',
         3 OUTPUT_TIME       CHAR(08),
         3 RETURN_CODE       FIXED BIN(15);
 DCL DTSYSDT_PTR             POINTER;
