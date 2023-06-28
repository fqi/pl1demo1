0  /*******************************************************************/00010005
   /* CALCNCD:  CALCULATE NAME CODE                                   */00020005
   /*                                                                 */00030005
   /* WHEN    WHO  WHY   WHAT                                         */00040005
   /* ------- ---- ----- -------------------------------------------- */00050005
   /* 90DEC21 GTRO CR507 CLEAN UP DRIVER'S CODE                       */00060005
   /* 90JUN20 ABAU REL12 DRIVER/CLIENT INTEGRATION                    */00070005
   /* 88DEC15 RSTA       NAME CODE CALC                               */00080005
   /*******************************************************************/00090005
0  DCL CALCNCD               EXT ENTRY (CHAR(35))      /* I:SURNAME   */00100005
                             RETURNS(CHAR(03));        /* O:NAME CODE */00110005
