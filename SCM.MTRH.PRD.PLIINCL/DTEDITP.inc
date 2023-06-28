0/*********************************************************************/
 /* DTEDITP: EDIT DATE                                                */
 /*********************************************************************/
 /*                                                                   */
 /* WHEN       WHO  ID      WHAT                                      */
 /* ---------- ---- ------- ----------------------------------------- */
 /* 1998-05-11 HJB  C980241 ORIGINAL                                  */
 /*********************************************************************/
 DCL DTEDIT_STR           CHAR(120);
 DCL 1 DTEDIT_WORK        BASED(DTEDIT_PTR),
       2 INPUT_DATA,
         3 INPUT_DATE        CHAR(20),
         3 JUL_INPUT_DATE    FIXED DEC(7),
         3 INPUT_FORMAT      CHAR(02),
         3 WINDOW_LMT        PIC'99',
       2 OUTPUT_DATA,
         3 RETURN_CODE       FIXED BIN(15),
         3 ERROR_MESSAGE     CHAR(79);
 DCL DTEDIT_PTR              POINTER;
