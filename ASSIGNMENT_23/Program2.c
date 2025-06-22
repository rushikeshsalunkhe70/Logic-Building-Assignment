//////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: Accept character from user. If' character is small display its corresponding capital character,and if it small then display its
//corresponding capital. In other cases display as it is.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 05/06/2025
// pattern:
/*
Enter a character: h 
Converted character: H
*/
////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')    
    {
        printf("Converted character: %c\n", ch + ('a' - 'A'));
    }
    else if(ch >= 'a' && ch <= 'z')  
    {
        printf("Converted character: %c\n", ch - ('a' - 'A'));
    }
    else   
    {
        printf("Character is not alphabetic: %c\n", ch);
    }
}

int main()
{
    char cValue;

    printf("Enter a character: ");
    scanf(" %c", &cValue); 

    Display(cValue);

    return 0;
}
