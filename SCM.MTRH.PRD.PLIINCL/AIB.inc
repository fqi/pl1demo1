     /* UNALIGNED                                          */
        2 AIBID              CHAR(08),       /* AIB IDENTIFIER       */
        2 AIBLEN             FIXED BIN(31),  /* AIB LENGTH           */
        2 AIBSFUNC           CHAR(08),       /* INQY SUBFUNCTION     */
        2 AIBRSNM1           CHAR(08),       /* PCBNAME              */
        2 AIBRSNM2           CHAR(08),       /* NOT USED             */
        2 RESERVE1,                          /* RESERVED             */
          3 FILL1            FIXED BIN(31),
          3 FILL2            FIXED BIN(31),
        2 AIBOALEN           FIXED BIN(31),  /* IOAREA MAX LENGTH    */
        2 AIBOAUSE           FIXED BIN(31),  /* IOAREA USED LENGTH   */
        2 RESERVE2,                          /* RESERVED             */
          3 FILL3            FIXED BIN(31),
          3 FILL4            FIXED BIN(31),
        2 FILL5              FIXED BIN(15),
        2 FILL6              FIXED BIN(15),
        2 AIBRETRN           FIXED BIN(31),  /* AIB SETS RETURN CODE */
        2 AIBREASN           FIXED BIN(31),  /* AIB SETS REASON CODE */
        2 RESERVE3,                          /* RESERVED             */
          3 FILL7            FIXED BIN(31),
        2 AIBRSA1            PTR,            /* AIB SETS PCB ADDRESS */
        2 AIBRSA2            PTR,            /* NOT USED             */
        2 AIBRSA3            PTR,            /* NOT USED             */
        2 RESERVE4,                          /* RESERVED             */
          3 FILL8            FIXED BIN(31),
          3 FILL9            FIXED BIN(31),
          3 FILL10           FIXED BIN(31),
          3 FILL11           FIXED BIN(31),
          3 FILL12           FIXED BIN(31),
          3 FILL13           FIXED BIN(31),
          3 FILL14           FIXED BIN(31),
          3 FILL15           FIXED BIN(31),
          3 FILL16           FIXED BIN(31),
          3 FILL17           FIXED BIN(31);
