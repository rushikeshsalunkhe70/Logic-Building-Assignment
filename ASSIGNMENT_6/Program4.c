////////////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: accept number from user and print table
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
    for(iCnt = 1;iCnt <=10;iCnt++ )
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