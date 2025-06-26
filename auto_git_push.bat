@echo off
set /p topic=Enter topic folder (Array, LinkedList, Stack, etc.): 
set /p fname=Enter program file name (without .cpp): 

cd %topic%

:: Compile program
g++ %fname%.cpp -o %fname%.exe

:: Run program
echo ---------------------
echo Running Output:
echo ---------------------
%fname%.exe

cd ..

:: GitHub push
git add .
git commit -m "Added %fname% program in %topic%"
git push

pause
