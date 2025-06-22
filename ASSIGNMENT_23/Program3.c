//////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: Accept character from user. If it is capital then display all thecharacters from the input characters till Z. If input character is small
//then print all the reverse order till a. In other cases return directly.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 05/06/2025
// pattern:
/*
Enter a character: d
d c b a 
*/
////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')   
    {
        for(char c = ch; c <= 'Z'; c++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
    else if(ch >= 'a' && ch <= 'z')   
    {
        for(char c = ch; c >= 'a'; c--)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
    else    
    {
        return;
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
