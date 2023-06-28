       2 DBDNAM            CHAR(8),        /* DATA BASE NAME.     */    DBPCB
       2 SEGLVL            CHAR(2),        /* SEGMENT LEVEL.      */    DBPCB
       2 STATCD            CHAR(2),        /* STATUS CODE.        */    DBPCB
       2 OPTION            CHAR(4),        /* PROC OPTIONS.       */    DBPCB
       2 RESVED            FIXED BIN(31),  /* RESERVED.           */    DBPCB
       2 SEGNAM            CHAR(8),        /* SEGMENT NAME.       */    DBPCB
       2 FBLNG             FIXED BIN(31),  /* FEEDBACK LENGTH.    */    DBPCB
       2 SENSEG            FIXED BIN(31),  /* SENSITIVE SEGMENTS. */    DBPCB
       2 FBAREA            CHAR(50);       /* KEY FEEDBACK AREA.  */    DBPCB
