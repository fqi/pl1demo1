 /*********************************************************************/
 /* DCLGEN TABLE(USBY)                                                */
 /*        LIBRARY(MTRHP.REL02.PLIINCL(USBY))                         */
 /*        ACTION(REPLACE)                                            */
 /*        LANGUAGE(PLI)                                              */
 /*        STRUCTURE(USBY_T)                                          */
 /*        APOST                                                      */
 /* ... IS THE DCLGEN COMMAND THAT MADE THE FOLLOWING STATEMENTS      */
 /*********************************************************************/
 EXEC SQL DECLARE USBY TABLE
           ( CLNO                           INTEGER NOT NULL,
             AREF                           CHAR(10) NOT NULL,
             SYST                           CHAR(4) NOT NULL,
             USAK                           VARCHAR(50) NOT NULL,
             UREL                           CHAR(3) NOT NULL,
             USID                           CHAR(8) NOT NULL,
             ACNN                           INTEGER NOT NULL,
             NOVW                           CHAR(1) NOT NULL,
             ALRT                           CHAR(1) NOT NULL
           ) ;
 /*********************************************************************/
 /* PLI DECLARATION FOR TABLE USBY                                    */
 /*********************************************************************/
 DCL 1 USBY_T,
      5 CLNO     BIN FIXED(31),
      5 AREF     CHAR(10),
      5 SYST     CHAR(4),
      5 USAK     CHAR(50) VAR,
      5 UREL     CHAR(3),
      5 USID     CHAR(8),
      5 ACNN     BIN FIXED(31),
      5 NOVW     CHAR(1),
      5 ALRT     CHAR(1);
 /*********************************************************************/
 /* THE NUMBER OF COLUMNS DESCRIBED BY THIS DECLARATION IS 9          */
 /*********************************************************************/
