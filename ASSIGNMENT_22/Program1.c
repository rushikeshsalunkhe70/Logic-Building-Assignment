//////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: Accept Character from user and check whether it is alphabet or not (A-z a-z).
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 05/06/2025
// pattern:
/*
enter the character:a
It is character

*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool CheckAlpha(char ch)
{
    if((ch >= 'A')  && (ch <= 'Z') || (ch >= 'a')  && (ch <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;
    printf("enter the character:");
    scanf("%c",&cValue);
    bRet = CheckAlpha(cValue);
    if(bRet == true)
    {
        printf("It is character");
    }
    else
    {
        printf("it is not a character");
    }

    return 0;
}