@echo off
:: Ask file name
set /p filename=Enter program file name (without .cpp): 

:: Compile C++ code
g++ "%filename%.cpp" -o "%filename%.exe"

:: Run compiled program
echo.
echo Running Program Output:
echo ------------------------
"%filename%.exe"
echo ------------------------

:: Git commands
git add .
git commit -m "Auto: Added %filename%.cpp"
git push

pause
