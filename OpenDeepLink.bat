@echo off

set DEEPLINK="https://www.microsoft.com/store/apps/9nb9srtl2kpt"

for /f "tokens=4-5 delims=. " %%i in ('ver') do set VERSION=%%i.%%j

rem Win10 version: 10.0
rem Win8.1 version: 6.3
rem Win8 version: 6.2
if "%version%" == "10.0" goto CHECK_X64
rem if "%version%" == "6.3" goto CHECK_X64
rem if "%version%" == "6.2" goto CHECK_X64
goto NOT_SUPPORTED_OS

:CHECK_X64
if not defined ProgramFiles(x86) goto NOT_SUPPORTED_OS

:OPEN_DEEP_LINK
start "" %DEEPLINK%
if ERRORLEVEL 1 goto START_ERROR

rem
rem Set Registry for Inventory
rem
set UWP_KEY="HKLM\SOFTWARE\Dell\WavesUWP"
set UWP_NAME="Dell Waves UWP"
set UWP_VERSION=1.1.67.0

reg add %PATCH_KEY% /v Product_Name /t REG_SZ /d %UWP_NAME% /f
reg add %PATCH_KEY% /v Product_Version /t REG_SZ /d %UWP_VERSION% /f

goto NOT_SUPPORTED_OS

:NOT_SUPPORTED_OS
exit 0

:START_ERROR
exit 1