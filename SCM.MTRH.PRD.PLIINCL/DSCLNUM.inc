0  /*******************************************************************/00010001
   /* DSCLNUM:  CONVERT LICENCE NUMBER TO CLIENT NUMBER               */00020001
   /*                                                                 */00030001
   /* WHEN    WHO  WHY   WHAT                                         */00040001
   /* ------- ---- ----- -------------------------------------------- */00050001
   /* 90DEC18 LYEE CR507 CLEAN UP DRIVER'S CODE                       */00060001
   /*******************************************************************/00070001
0  DCL DSCLNUM               EXT ENTRY (PIC'(7)9')                      00080002
                             RETURNS (PIC'(9)9');                       00090002