//////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: Accept character from user and display its ASCII value in decimal,octal and hexadecimal format.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 05/06/2025
// pattern:
/*
Enter a character: A
Character: A
Decimal   : 65
Octal     : 101
Hex       : 41
*/
////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(char ch)
{
    printf("Character: %c\n", ch);
    printf("Decimal   : %d\n", ch);
    printf("Octal     : %o\n", ch);
    printf("Hex       : %X\n", ch);
}

int main()
{
    char cValue;

    printf("Enter a character: ");
    scanf(" %c", &cValue);  
    Display(cValue);

    return 0;
}
