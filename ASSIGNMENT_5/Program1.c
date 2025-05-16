////////////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: Accept number from user print  $  *  $  *  $ 
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 13/05/2025
// 
////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1 ; iCnt <= iNo; iCnt++ )
    
    {
        printf(" $  * ",iCnt);
    }
    
}

int main()
{ 
    int iValue = 0;
    
    printf("Enter a number:");
    scanf("%d",&iValue);
    Pattern(iValue);
    
    return 0;
}