//////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: Accept Character from user and check whether it is capital or no (A-Z).
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 05/06/2025
// pattern:
/*
enter the character:A
It is capital character

*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool CheckCapital(char ch)
{
    if((ch >= 'A')  && (ch <= 'Z') )
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
    bRet = CheckCapital(cValue);
    if(bRet == true)
    {
        printf("It is capital character");
    }
    else
    {
        printf("it is not a capital character");
    }

    return 0;
}