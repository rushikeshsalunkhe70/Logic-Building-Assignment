////////////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: Factor in Reverse order
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 13/05/2025
// 
////////////////////////////////////////////////////////////////////

#include<stdio.h>
void FactRev(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo/2 ; iCnt >= 1 ; iCnt--)
    if(iNo % iCnt == 0)
    {
       printf("%d ",iCnt);
    }
    
}

int main()
{ 
    int iValue = 0;
    
    printf("Enter a number:");
    scanf("%d",&iValue);
    printf("Factors in reverse order are \n");
    FactRev(iValue);
    return 0;
}