@echo off
set /p filename=Enter program file name (without .cpp): 

g++ "%filename%.cpp" -o "%filename%.exe"

echo.
echo Running Program Output:
echo ------------------------
"%filename%.exe"
echo ------------------------

git add .
git commit -m "Added %filename%.cpp"
git push

pause
