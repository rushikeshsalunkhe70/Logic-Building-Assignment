//////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: Write a program which displays ASCII table.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 05/06/2025
////////////////////////////////////////////////////////////////////
#include <stdio.h>

void DisplayAscii()
{
    int i = 0;

    printf("---------------------------------------------------\n");
    printf("| Decimal | Symbol | Hexadecimal |   Octal        |\n");
    printf("---------------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        if(i < 32 || i == 127)
        {
            
            printf("|   %3d   |  ---   |     %02X      |    %03o        |\n", i, i, i);
        }
        else
        {
            
            printf("|   %3d   |   %c    |     %02X      |    %03o        |\n", i, i, i, i);
        }
    }

    printf("---------------------------------------------------\n");
}

int main()
{
    DisplayAscii();
    return 0;
}
