///////////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: find even factor of given nuber and its multiplication of output
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
    
    for(iCnt = 2;iCnt <= iNo;iCnt += 2)
   
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
    printf("Even factorial of number is %d",iRet);
    return 0;
}