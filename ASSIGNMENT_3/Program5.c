////////////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: Check whether charcter is vowel or not
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 10/05/2025
// 
////////////////////////////////////////////////////////////////////


#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkVowel(char Cvowel)
{
    if(Cvowel == 'a' || Cvowel == 'e' || Cvowel == 'i' || Cvowel == 'o' || Cvowel == 'u' ||
        Cvowel == 'A' || Cvowel == 'E' || Cvowel == 'I' || Cvowel == 'O' || Cvowel == 'U')
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter character \n");
    scanf("%c",&cValue);
    bRet =  ChkVowel  (cValue);
    if(bRet == TRUE )
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return 0;
}