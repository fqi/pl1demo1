       2 LTERM             CHAR(8),        /* LTERM NAME          */    IOPCB
       2 RESVED            BIT(16),        /* RESERVED            */    IOPCB
       2 STATCD            CHAR(2),        /* STATUS CODE         */    IOPCB
       2 IOPRE,                            /* INPUT PREFIX        */    IOPCB
         3 IODATE          FIXED DEC(7),   /* JULIAN DATE         */    IOPCB
         3 IOTIME          FIXED DEC(7),   /* TIME                */    IOPCB
         3 IOMSG#          FIXED BIN(31),  /* SEQUENCE NUMBER     */    IOPCB
       2 MODNAME           CHAR(8),        /* MESSAGE OUTPUT      */    IOPCB
       2 USERID            CHAR(8),        /* USERID/LTERM/PSB    */    IOPCB
       2 RACF              CHAR(8);        /* USER RACF GROUP     */    IOPCB
