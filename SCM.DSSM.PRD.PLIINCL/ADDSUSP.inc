 /* PLIINCL ***********************************************************/
 /* ADDSUSP: ADD SUSPENSION SEGMENT                                   */
 /* OWNING SYSTEM: DSSM - DRIVER LICENCING SYSTEM                     */
 /*********************************************************************/
 /*                                                                   */
 /* WHEN       WHO  CR #     WHAT                                     */
 /* ---------- ---- -------- ---------------------------------------- */
 /* 2010-05-14 MMC           IDEP PROJECT                             */
 /* 2012-02-06 NK   IDEP     REMOVE RETURN                            */
 /*********************************************************************/
 DCL ADDSUSP EXT ENTRY (,                  /*COMMON                   */
                        POINTER,           /*DRVRS PCB                */
                        FIXED BIN(31),     /*LICENCE #                */
                        CHAR(6),           /*XS                       */
                        FIXED DEC (7,0),   /*TODAY                    */
                        FIXED DEC (7,0),   /*EFF DATE                 */
                        FIXED DEC (7,0));  /*REVIEW DATE              */
