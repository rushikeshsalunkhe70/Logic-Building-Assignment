////////////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: Summation of return factor
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 13/05/2025
// 
////////////////////////////////////////////////////////////////////

#include<stdio.h>
int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
    if(iNo % iCnt != 0)
    
     {
        iSum = iSum + iCnt;
     }
    }
    return iSum;
}

int main()
{ 
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a number:");
    scanf("%d",&iValue);
    iRet = SumNonFact(iValue);
    printf("Sum of non Factor are %d \n",iRet);
    return 0;
}