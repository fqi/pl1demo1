0/*********************************************************************/
 /* DTADJLM: ADJUST A JULIAN DATE BY DELTA MONTHS                     */
 /*********************************************************************/
 /*                                                                   */
 /* WHEN       WHO  ID      WHAT                                      */
 /* ---------- ---- ------- ----------------------------------------- */
 /* 1998-02-25 HJB  C980411 ORIGINAL                                  */
 /*********************************************************************/
0 DCL DTADJLM                EXT ENTRY (PTR);
 /*-------------------------------------------------------------------*/
 /* DTADJLM CONTAINS THE STRUCTURE AND PTR TO BE PASSED TO DTADJLM    */
 /*-------------------------------------------------------------------*/
  %INCLUDE DTADJLMP;
 /*-------------------------------------------------------------------*/
 /* SET THE POINTER ADDRESSES FOR THE SUBROUTINE                      */
 /*-------------------------------------------------------------------*/
  DTADJLM_STR     = '';
  DTADJLM_PTR     = ADDR(DTADJLM_STR);