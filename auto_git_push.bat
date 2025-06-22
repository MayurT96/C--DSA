@echo off
set /p fname=Enter filename (without .cpp): 

:: Compile
g++ %fname%.cpp -o %fname%.exe

:: Run
echo ------------------
echo Running Output:
echo ------------------
%fname%.exe

:: Git Add/Commit/Push
git add .
git commit -m "Added %fname% program"
git push

pause
