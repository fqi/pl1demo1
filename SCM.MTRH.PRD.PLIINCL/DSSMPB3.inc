 /* PLIINCL ***********************************************************/00000100
 /* DSSMPB3: EDIT MASTER STATUS USING LINE DATABASE                   */00000200
 /* OWNING SYSTEM: MTRH <-- APPLICATION SYSTEM ID OF THIS INCLUDE     */00000300
 /*********************************************************************/00000400
 /*                                                                   */00000500
 /* WHEN       WHO  CR #     WHAT                                     */00000600
 /* ---------- ---- -------- ---------------------------------------- */00000700
 /* 1998-11-19 MMC  C980246  Y2K COMPLIANT                            */00000800
 /*   90DEC13 GTRO CR507 CLEAN UP DRIVER'S CODE                       */00060000
 /*   90JUN27 GTRO REL12 DRIVER INTEGRATION                           */00070000
 /*********************************************************************/00080000
0  DCL DSSMPB3               EXT ENTRY (,             /*I:COMMON   */   00090000
                                        POINTER,      /*I:DSLNPCB_PTR*/ 00100000
                                        CHAR(6),      /*I:STATUS_CODE*/ 00110000
                                        CHAR(1),      /*I:EXTN_FLAG  */ 00120000
                                        CHAR(1),      /*I:SUSP_FLAG  */ 00130000
                                        CHAR(1),      /*I:CPIC_FLAG  */ 00140000
                                        CHAR(45));    /*I:STATUS_DESC*/ 00150000
