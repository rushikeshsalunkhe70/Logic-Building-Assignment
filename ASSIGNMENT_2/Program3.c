////////////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: Accept two number from user and displayfirstnumber in second number of times
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 09/05/2025
// 
////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo ,int iFrequency)
{
    int i = 0 ;

    for(i=0;i< iFrequency;i++)
    {
        printf("%d ",iNo);
    }
}

int main()
    {
        int iValue = 0;
        int iCount = 0;
        printf("Enter number ");
        scanf("%d",&iValue);
        printf("Enter Frequency ");
        scanf("%d",&iCount);
        Display(iValue,iCount);
        return 0;

    }

