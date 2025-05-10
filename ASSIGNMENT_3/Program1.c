////////////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: Accept one no from user print its even number on screen
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 10/05/2025
// 
////////////////////////////////////////////////////////////////////

#include<stdio.h>
void PrintEven(int iNo)
{
    int iCnt = 0;
    int iNum = 2;

    if(iNo <= 0)
    {
        printf("%d\n", iNo);
        return ;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iNum);
        iNum += 2;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number \n");
    scanf("%d",&iValue);
    PrintEven(iValue);

    return 0;
}