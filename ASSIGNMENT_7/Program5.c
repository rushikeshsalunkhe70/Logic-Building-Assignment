
////////////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: Summation between factor and non factor
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 13/05/2025
// 
////////////////////////////////////////////////////////////////////

#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    for(iCnt = 2 ; iCnt <= iNo ; iCnt++)
    if(iCnt % 2 == 0)
    {
        iEvenFact = iEvenFact *  iCnt;
    }
     else
    {
        
    
        iOddFact = iOddFact * iCnt;
}


    return iEvenFact - iOddFact;
    
}
   


int main()
{ 
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a number:");
    scanf("%d",&iValue);
    iRet = FactDiff(iValue);
    printf(" %d\n",iRet);
    return 0;
}