////////////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: Accept one number from user and check whether it is divisible by 5 or not
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 09/05/2025
// 
////////////////////////////////////////////////////////////////////


#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

  BOOL check(int iNo)
 {
    if((iNo % 5) == 0)
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
    printf("Enter number \n");
    scanf("%d",&iValue);
    bRet = check(iValue);
    if(bRet == TRUE)
    {
        printf("Divisible by 5 \n");
    }
    else
    {
        printf("Not Divisible by 5 \n");
    }
    return 0;
}