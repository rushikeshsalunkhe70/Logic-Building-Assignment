////////////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: accept number from user and print table in reverse order
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 13/05/2025
// 
////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Table(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 10;iCnt >= 1;iCnt-- )
    {
        printf("%d ", iNo * iCnt);
        
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter a number");
    scanf("%d",&iValue);
    Table(iValue);
    return 0;
}