 /* PLIINCL ***********************************************************/
 /* DTFAJ6M: ADJUST A CCYYDDD JULIAN DATE BY A NUMBER OF MONTHS       */
 /* OWNING SYSTEM: MTRH <-- APPLICATION SYSTEM ID OF THIS INCLUDE     */
 /*********************************************************************/
 /*                                                                   */
 /* WHEN       WHO  CR #     WHAT                                     */
 /* ---------- ---- -------- ---------------------------------------- */
 /* 1998-10-06 SCAY 18311    ORIGINAL                                 */
 /*********************************************************************/
 DCL DTFAJ6M  EXT ENTRY(PIC'(7)9',          /* DATE CCYYDDD (JULIAN)  */
                        FIXED BIN(15))      /* MONTHS TO ADJUST BY    */
     RETURNS           (PIC'(7)9');         /* RESULT DATE            */
