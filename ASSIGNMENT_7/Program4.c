///////////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: find odd factor of given number and its multiplication of output
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 13/05/2025
// 
////////////////////////////////////////////////////////////////////
#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;iCnt <= iNo;iCnt += 2)
   
    {
       iFact = iFact * iCnt;
    }
     return iFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter a number");
    scanf("%d",&iValue);
    iRet = EvenFactorial(iValue);
    printf("odd factorial of number is %d",iRet);
    return 0;
}