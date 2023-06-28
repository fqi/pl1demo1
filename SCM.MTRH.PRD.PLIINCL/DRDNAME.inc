0  /*******************************************************************/00010019
   /* DRDNAME:  DR1NAME DATA                                          */00020019
   /*                                                                 */00030019
   /* WHEN    WHO  WHY   WHAT                                         */00040019
   /* ------- ---- ----- -------------------------------------------- */00050019
   /* 90DEC13 GTRO CR507 CLEAN UP CODE                                */00060019
   /*******************************************************************/00070019
         2 DLET              CHAR (01),        /* DELETE FLAG         */00080019
         2 NEDT              FIXED DEC (07,0), /* NAME EFFECTIVE DATE */00090019
         2 NDNO              CHAR (07),        /* NAME DOCUMENT NUM   */00100019
         2 SOCD              CHAR (05),        /* SOUNDEX CODE        */00110019
         2 SURN              CHAR (35),        /* SURNAME             */00120019
         2 GINM              CHAR (35),        /* GIVEN NAMES         */00130019
         2 BIDT              FIXED DEC (07,0), /* BIRTH DATE          */00140019
         2 SEX               CHAR (01),        /* SEX                 */00150019
         2 NACD              CHAR (01),        /* NAME TYPE CODE      */00160019
         2 FRND              CHAR (01),        /* FILE REF  INDICATOR */00170019
         2 INIT              CHAR (02),        /* DRIVERS INITIALS    */00180019
         2 CITY              CHAR (10),        /* CITY                */00190019
         2 ASLC              CHAR (01),        /* ALPHA SRCH LIC CDE  */00200019
