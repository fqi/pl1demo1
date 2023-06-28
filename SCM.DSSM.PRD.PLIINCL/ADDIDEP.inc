 /* PLIINCL ***********************************************************/
 /* ADDIDEP: ADD IDEP EXPANDED STATUS                                 */
 /* OWNING SYSTEM: DSSM - DRIVER LICENCING SYSTEM                     */
 /*********************************************************************/
 /*                                                                   */
 /* WHEN       WHO  CR #     WHAT                                     */
 /* ---------- ---- -------- ---------------------------------------- */
 /* 2012-03-27 NK   IDEP II  ADD FOTO CANCELLED                       */
 /* 2010-05-14 MMC           IDEP PROJECT                             */
 /*********************************************************************/
 DCL ADDIDEP               EXT ENTRY (,                /*COMMON     */
                                      POINTER,         /*DRVRS PCB  */
                                      FIXED BIN(31),   /*LICENCE #  */
                                      CHAR(6),         /*XS         */
                                      FIXED DEC (7,0), /*TODAY      */
                                      FIXED DEC (7,0), /*EFF DATE   */
                                      FIXED DEC (7,0), /*REVIEW DATE*/
                                      CHAR(01),        /*STLI       */
                                      BIT(1),          /*FOTO CANCEL*/
                                      CHAR(79))
                           RETURNS (BIT(1));
