0/*********************************************************************/
 /* DTADJLMP: ADJUST A JULIAN DATE BY DELTA NUMBER OF DAYS            */
 /*********************************************************************/
 /*                                                                   */
 /* WHEN       WHO  ID      WHAT                                      */
 /* ---------- ---- ------- ----------------------------------------- */
 /* 1998-04-08 HJB  C980411 ORIGINAL                                  */
 /*********************************************************************/
 DCL DTADJLM_STR          CHAR(48);
 DCL 1 DTADJLM_WORK       BASED(DTADJLM_PTR),
       2 INPUT_DATA,
         3 INPUT_DT          FIXED DEC(7,0),
         3 DELTA_AMT         FIXED DEC(5,0),
       2 OUTPUT_DATA,
         3 OUTPUT_DT         FIXED DEC(7,0),
         3 RETURN_CODE       FIXED BIN(15);
 DCL DTADJLM_PTR             POINTER;
