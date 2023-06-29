 /* PLIINCL ***********************************************************/C971123
 /* DSIOPCB:   I/O PCB MASK                                           */C971123
 /* OWNING SYSTEM: DSSM <-- APPLICATION SYSTEM ID OF THIS INCLUDE     */C971123
 /*********************************************************************/C971123
 /*                                                                   */C971123
 /* WHEN       WHO  CR #     WHAT                                     */C971123
 /* ---------- ---- -------- ---------------------------------------- */C971123
 /* 1997-10-31 GW   C971123  ADD RACF GROUP TO MASK                   */C971123
 /*                                                                   */
 /* WHEN    WHO  WHY   WHAT                                           */
 /* ------- ---- ----- ---------------------------------------------- */
 /* 90DEC18 GTRO CR507 CLEAN UP DRIVER'S CODE                         */
 /* 81MAR10 ???? 001   CREATION                                       */
 /*********************************************************************/
0  DCL DSIOPCB_PTR           POINTER;
0  DCL 01 DSIOPCB            UNALIGNED BASED(DSIOPCB_PTR),              C971123
          05 LTERM           CHAR(8),            /* LTERM NAME       */
          05 RESVED          BIT(16),            /* RESERVED         */
          05 STATCD          CHAR(2),            /* STATUS CODE      */
          05 IOPRE,                              /* INPUT PREFIX     */
             10 IODATE       FIXED DEC(7),       /* JULIAN DATE      */
             10 IOTIME       FIXED DEC(7),       /* TIME             */
             10 IOMSG#       FIXED BIN(31),      /* SEQUENCE NUMBER  */
          05 MODNAM          CHAR(8),            /* MOD NAME         */
          05 USERID          CHAR(8),            /* USERID/LTERM/PSB */
          05 RACF            CHAR(8);            /* RACF             */ C971123
