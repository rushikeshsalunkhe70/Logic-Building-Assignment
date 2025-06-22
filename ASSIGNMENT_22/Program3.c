//////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: Accept Character from user and check whether it is digit or not(0-9).
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 05/06/2025
// pattern:
/*
enter the character:7
It is Digit

*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool CheckDigit(char ch)
{
    if((ch >= '0')  && (ch <= '9') )
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
    bRet = CheckDigit(cValue);
    if(bRet == true)
    {
        printf("It is Digit");
    }
    else
    {
        printf("it is not a Digit");
    }

    return 0;
}