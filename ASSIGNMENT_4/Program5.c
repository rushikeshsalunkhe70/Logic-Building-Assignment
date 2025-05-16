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
    int iFact = 0;
    int iNonFact = 0;
    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
    if(iNo % iCnt == 0)
    
    {
        iFact += iCnt;
    }
    else
    {
        iNonFact += iCnt;
    }
}
    return iFact - iNonFact;
    
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