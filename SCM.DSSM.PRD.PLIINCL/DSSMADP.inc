 /* PLIINCL ***********************************************************/
 /* DSSMADP: DRIVER STATUS MAINTENANCE                                */
 /* OWNING SYSTEM: DSSM - DRIVER LICENCING SYSTEM                     */
 /*********************************************************************/
 /*                                                                   */
 /* WHEN       WHO  CR #     WHAT                                     */
 /* ---------- ---- -------- ---------------------------------------- */
 /* 2009-02-18 MMC  EDLP2   REMOVE ERRMSG                             */
 /*********************************************************************/
 /*-------------------------------------------------------------------*/
 /* IO RECORD STRUCTURE FOR DSSMPAAA                                  */
 /*-------------------------------------------------------------------*/
           10 LNUM         CHAR(7),  /* LICENCE NUMBER                */
           10 NACD         CHAR(3),  /* NAME CODE                     */
           10 SECT         CHAR(1),  /* SECTION                       */
           10 NMCD         CHAR(1),  /* NEW MASTER STATUS             */
           10 NECD         CHAR(4),  /* NEW EXPANDED STATUS           */
           10 EFDT         CHAR(7),  /* EFFECTIVE DATE                */
           10 SRDT         CHAR(7),  /* REVIEW DATE                   */
           10 SDUR         CHAR(5),  /* STATUS DURATION               */
           10 DURU         CHAR(1),  /* DURATION UNITS - M/D/Y        */
           10 ACTN         CHAR(1),  /* ACTION CODE - A / D / P       */
