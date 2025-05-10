////////////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: Accept no from user check even or odd
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 09/05/2025
// 
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL checkEven(int iNo)
{
    if(iNo %2 == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter number ");
    scanf("%d",&iValue);
    bRet  = checkEven(iValue);
    if(bRet == TRUE)
    {
        printf("number is even \n");
    }
    else
    {
        printf("number is odd \n");
    }

    return 0;
}