@echo off
REM =========================================================================
REM =																		=
REM = AUTHOR:   DAN ZABINSKI												=
REM = DATE  :   10/17/2016													=
REM =																		=
REM =========================================================================
REM =========================================================================
REM = PURPOSE:  THIS BAT FILE SHOULD READ THROUGH ALL OF THE FILE CONTENTS  =
REM =           AND CALL THE CORRESPONDING C PROGRAM TO UPDATE ALL FILES    =
REM =           WITH THE REQUIRED SOAP MESSAGES                             =
REM =                                                                       =
REM 
@echo on
@echo hello


rem =   the below should read each file in the current folder and process
rem =    replace echo with program name once written.
FOR %%I in (*.*) DO echo %%I