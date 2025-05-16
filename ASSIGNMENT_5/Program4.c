////////////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: Display odd number
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 13/05/2025
// 
////////////////////////////////////////////////////////////////////

#include<stdio.h>
void OddDisplay(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1 ; iCnt < iNo; iCnt++ )
    if(iCnt % 2 != 0)
    {
        printf("%d ",iCnt);
    }
    


    
}

int main()
{ 
    int iValue = 0;
    
    printf("Enter a number:");
    scanf("%d",&iValue);
    OddDisplay(iValue);
    
    return 0;
}