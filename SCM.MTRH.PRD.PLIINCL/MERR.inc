1/*********************************************************************/
 /*                                                                   */
 /*  PROGRAM ROLL TABLE                                               */
 /*                                                                   */
 /*********************************************************************/
 EXEC SQL DECLARE MERR TABLE
           ( PATS                           TIMESTAMP NOT NULL,
                                    /* PROGRAM_ROLL_TIMESTAMP         */
             TRAN                           CHAR(8) NOT NULL,
                                    /* TRANSACTION                    */
             ROUT                           CHAR(8) NOT NULL,
                                    /* INTERFACE_ROUTINE_NAME         */
             CALL                           CHAR(12) NOT NULL,
                                    /* CALL                           */
             RTCD                           CHAR(12) NOT NULL,
                                    /* RETURN_CODE                    */
             RSCD                           CHAR(12) NOT NULL,
                                    /* REASON_CODE                    */
             EMSG                           CHAR(80) NOT NULL,
                                    /* ERROR_MESSAGE                  */
             SCRN                           VARCHAR(1920) NOT NULL
                                    /* ENTIRE_ROLL_SCREEN             */
           ) ;
1/*********************************************************************/
 /*                                                                   */
 /* HOST STRUCTURE FOR:                                               */
 /* PROGRAM ROLL TABLE ROW                                            */
 /*                                                                   */
 /*********************************************************************/
 DCL 1 MERR_R,                                 /*                     */
       5 PATS                CHAR(26),         /*                     */
       5 TRAN                CHAR(8),          /*                     */
       5 ROUT                CHAR(8),          /*                     */
       5 CALL                CHAR(12),         /*                     */
       5 RTCD                CHAR(12),         /*                     */
       5 RSCD                CHAR(12),         /*                     */
       5 EMSG                CHAR(80),         /*                     */
       5 SCRN                CHAR(1920) VAR;   /*                     */
