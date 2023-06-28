0DCL USBYCHG EXT ENTRY                 /* CHANGE USBY ROW             */00011100
                 (CHAR (07),           /* DB2 FILTER NAME             */00011200
                  POINTER,             /* DB2 FILTER COMM AREA        */00011200
                  FIXED BIN (31),      /* CLNO OF USBY ROW TO CHANGE  */00011300
                  CHAR (10),           /* AREF OF USBY ROW TO CHANGE  */00011300
                  CHAR (04),           /* SYST OF USBY ROW TO CHANGE  */00011300
                  CHAR (50) VARYING,   /* USAK OF USBY ROW TO CHANGE  */00011300
                  CHAR (03),           /* UREL OF USBY ROW TO CHANGE  */00011300
                  CHAR (08),           /* USID OF USER MAKING THE CHG */00011300
                  CHAR (03),           /* NEW UREL / = IMPLIES NO CHG */00011300
                  CHAR (01),           /* NEW NOVW / = IMPLIES NO CHG */00011300
                  CHAR (01),           /* NEW ALRT / = IMPLIES NO CHG */00011300
                  CHAR (79))           /* RETURN CODE MESSAGE         */00011300
             RETURNS (FIXED BIN (15)); /* RETC = +000 UPDATE OK       */00011400
                                       /* RETC = +100 ROW NOT FOUND   */00011400
                                       /* RETC = -803 UPDATE YIELDS   */00011400
                                       /*        DUPLICATE KEY        */00011400
