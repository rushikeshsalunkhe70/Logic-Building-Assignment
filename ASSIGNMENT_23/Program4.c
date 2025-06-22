//////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, A, &, *).
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 05/06/2025
// pattern:
/*
Enter a Character:@
it is special symbol
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool checkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%'|| ch == '^' || ch == '&' || ch == '*')
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
    char cValue = '\0' ;
    bool bRet = false;
    printf("Enter a Character:");
    scanf("%c",&cValue);
    bRet = checkSpecial(cValue);
    if(bRet == true)
    {
        printf("it is special symbol");
    }
    else
    {
        printf("it is not a special symbol");
    }

    return 0;
}