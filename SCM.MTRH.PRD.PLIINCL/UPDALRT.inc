0  /*******************************************************************/00010001
   /* UPDALRT:  UPDATE ALRT ON USBY TABLE                             */00020001
   /*                                                                 */00030001
   /* WHEN    WHO  WHY   WHAT                                         */00040001
   /* ------- ---- ----- -------------------------------------------- */00050001
   /* 90DEC14 GTRO CR507 CLEAN UP DRIVER'S CODE                       */00060001
   /*******************************************************************/00070001
0  DCL UPDALRT      EXT ENTRY (,                   /* I:DSCOMMON      */00080001
                               BIN FIXED(31),      /* I:DRIVER LIC #  */00090001
                               CHAR(1),            /* I:OLD MST CODE  */00100001
                               CHAR(1),            /* I:NEW MST CODE  */00110001
                               CHAR(1),            /* O:CALC ALRT FLG */00120001
                               BIN FIXED(15),      /* O:RETURN CODE   */00130001
                               CHAR(79));          /* O:ERROR MSG     */00140001
