0  /*******************************************************************/00010004
   /* DRDFOTO:  DR1FOTO DATA                                          */00020004
   /*                                                                 */00030004
   /* WHEN    WHO  WHY   WHAT                                         */00040004
   /* ------- ---- ----- -------------------------------------------- */00050004
   /* 90DEC27 GTRO CR507 CLEAN UP DRIVER'S CODE                       */00060004
   /*******************************************************************/00070004
         2 LICD              CHAR (01),         /* LICENCE ISSUED CDE */00080004
         2 ISOF              FIXED DEC (05,0),  /* ISSUING OFFICE NUM */00090004
         2 LXDT              FIXED DEC (07,0),  /* LICENCE EXPIRY DTE */00100004
         2 LCDT              FIXED DEC (07,0),  /* LICENCE CANCLN DTE */00110004
         2 LSDT              FIXED DEC (07,0),  /* LICENCE SRNDR DTE  */00120004
         2 ADDT              FIXED DEC (07,0),  /* DATE ADDED         */00130004
