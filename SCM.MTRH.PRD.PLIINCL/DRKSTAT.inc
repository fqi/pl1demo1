0  /*******************************************************************/00010003
   /* DRKSTAT:  DR1STAT KEY                                           */00020003
   /*                                                                 */00030003
   /* WHEN    WHO  WHY   WHAT                                         */00040003
   /* ------- ---- ----- -------------------------------------------- */00050003
   /* 90DEC13 GTRO CR507 CLEAN UP CODE                                */00060003
   /*******************************************************************/00070003
           3 SECT            CHAR (01),        /* SECTION             */00080003
           3 NMCD            CHAR (01),        /* NEW MASTER STATUS   */00090003
           3 NECD            CHAR (04),        /* NEW EXPANDED STATUS */00100003
           3 EFDT            FIXED DEC (07,0), /* EFFECTIVE DATE      */00110003
           3 SRDT            FIXED DEC (07,0), /* STATUS REVIEW DATE  */00120003
