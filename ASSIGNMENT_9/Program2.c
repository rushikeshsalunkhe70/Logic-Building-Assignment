/////////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: accept number from user and check it contain zero or not
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 15/05/2025
// 
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL chkZero(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while ((iNo != 0))
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
        
    }
    return FALSE;
    

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("enter number");
    scanf("%d",&iValue);
    bRet = chkZero(iValue);
    if(bRet == TRUE)
    {
        printf("it contain zero");
    }
    else
    {
        printf("ther is no zero");
    }
    return 0;
}