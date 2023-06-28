 /* PLIINCL ***********************************************************/
 /* DTFAJ6D: ADJUST A CCYYDDD JULIAN DATE BY A NUMBER OF DAYS.        */
 /* OWNING SYSTEM: MTRH <-- APPLICATION SYSTEM ID OF THIS INCLUDE     */
 /*********************************************************************/
 /*                                                                   */
 /* WHEN       WHO  CR #     WHAT                                     */
 /* ---------- ---- -------- ---------------------------------------- */
 /* 1998-09-24 SCAY 18311    ORIGINAL                                 */
 /*********************************************************************/
 DCL DTFAJ6D  EXT ENTRY(PIC'(7)9',          /* DATE CCYYDDD (JULIAN)  */
                        FIXED BIN(15))      /* DAYS TO ADJUST BY      */
     RETURNS           (PIC'(7)9');         /* RESULT DATE            */
