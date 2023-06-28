        2 IO_PCB_ADDR      POINTER,       /* IO PCB ADDRESS         */  COMMON
        2 EX_PCB_ADDR      POINTER,       /* EXPRESS PCB ADDRESS    */  COMMON
        2 AL_PCB_ADDR      POINTER,       /* ALTERNATE PCB ADDRESS  */  COMMON
        2 PGMID            CHAR (8),      /* PROGRAM ID             */  COMMON
        2 DLI_CALLS        FIXED BIN (31),/* # OF DLI CALLS         */  COMMON
        2 VALID_STAT       CHAR (20),     /* ACCEPTABLE STATUS LIST */  COMMON
        2 DB2_TERMECB      FIXED BIN (31);/* DB2 TERMINATION CA ECB */  COMMON
