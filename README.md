# triangle-problem-in-cpp
In this triangle problem we have generated three random values and make triangle with the help of that three Random numbers. Then we take one value from user and check where this value lies in triangle. 


How to run the given traingle Graphics File.

1. Install code block

2. download tdm gcc 32 bit .exe from given link

Link: https://jmeubank.github.io/tdm-gcc/articles/2021-05/10.3.0-release

3. Follow the instruction in the given link below to install gcc.exe

https://wiki.codeblocks.org/index.php/MinGW_installation

4. copy and paste graphics.h and winbgim.h file in tdmgcc\include\

5. copy and paste libbgi.a file in tdmgcc\lib\

6. after that open code block->setting->compiler->linker setting
add following code to linker option section.

-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

Now you are ready to go. 
