////////////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: accept number from user and print its number line
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 13/05/2025
// 
////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = -iNo ; iCnt <= iNo; iCnt++ )
    
    {
        printf("%d ",iCnt);
    }
    
    
}

int main()
{ 
    int iValue = 0;
    
    printf("Enter a number:");
    scanf("%d",&iValue);
    Display(iValue);
    
    return 0;
}