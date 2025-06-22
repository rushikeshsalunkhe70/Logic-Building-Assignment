//////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: Accept Character from user and check whether it is small case or not (a-z).
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 05/06/2025
// pattern:
/*
enter the character:g
It is Small case character
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char ch)
{
    if((ch >= 'a')  && (ch <= 'z') )
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
    bRet = CheckSmall(cValue);
    if(bRet == true)
    {
        printf("It is Small case character");
    }
    else
    {
        printf("it is not a small case character");
    }

    return 0;
}