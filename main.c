//System Libraries
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//User Libraries
#include "utils.h"

//Constants
#define APP_NAME "Agence de Voyage"

HANDLE wHnd;
HANDLE rHnd; 
COORD bufferSize = {0, 0};
	
int main(int argc, char *argv[])
{
    //Configuration de Windows
    wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    rHnd = GetStdHandle(STD_INPUT_HANDLE);
    SetConsoleTitle(APP_NAME);
    SMALL_RECT windowSize = {0, 0, 70,40};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    SetConsoleScreenBufferSize(wHnd, bufferSize);
    menu();
    system("PAUSE");	
    return 0;
}
