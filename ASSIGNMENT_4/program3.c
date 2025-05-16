////////////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: Display non factor
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 13/05/2025
// 
////////////////////////////////////////////////////////////////////

#include<stdio.h>
void NonFact(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    if(iNo % iCnt != 0)
    {
       printf("%d ",iCnt);
    }
    
}

int main()
{ 
    int iValue = 0;
    
    printf("Enter a number:");
    scanf("%d",&iValue);
    printf("Non Factor are  \n");
    NonFact(iValue);
    return 0;
}