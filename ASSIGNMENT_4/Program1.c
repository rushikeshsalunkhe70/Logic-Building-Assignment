////////////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: Accept number from user and display its multiplication
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 13/05/2025
// 
////////////////////////////////////////////////////////////////////

#include<stdio.h>
int MultFactor(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++ )
    if(iNo % iCnt == 0)
    {
        iFact = iFact * iCnt ;
    }
    return iFact;
}

int main()
{ 
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number:");
    scanf("%d",&iValue);
    iRet  = MultFactor(iValue);
    printf("Multiplication of factor are %d",iRet);
    return 0;
}