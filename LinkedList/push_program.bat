@echo off
set /p filename=Enter program file name (without .cpp): 
g++ %filename%.cpp -o %filename%
echo.
echo Running Program Output:
echo ------------------------
%filename%
echo ------------------------

git add .
git commit -m "Added %filename%.cpp"
git push

pause
