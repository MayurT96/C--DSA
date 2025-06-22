@echo off
set /p fname=Enter filename (without .cpp):

:: Compile program
g++ %fname%.cpp -o %fname%.exe

:: Run program
echo ------------------
echo Running Output:
echo ------------------
%fname%.exe

:: Git commands
git add .
git commit -m "Added %fname% program"
git push

pause
