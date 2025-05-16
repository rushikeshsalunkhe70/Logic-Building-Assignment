////////////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: find Factorial of given number
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 13/05/2025
// 
////////////////////////////////////////////////////////////////////

#include<stdio.h>
int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++ )
    {
        iFact = iFact * iCnt;
        
    }
    return iFact;
}

int main()
{
    int iValue = 0;
   int  iRet = 0;
    printf("Enter a number");
    scanf("%d",&iValue);
    iRet = Factorial(iValue);
    printf("Factorial number is %d",iRet);
    
    return 0;
}