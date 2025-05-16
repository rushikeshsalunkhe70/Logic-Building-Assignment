///////////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: accept number from user and print it reverse order
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 15/05/2025
// 
////////////////////////////////////////////////////////////////////
#include<stdio.h>
void DisplayDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d \n",iDigit);
        iNo = iNo / 10;
        
    }
    
}
int main()
{
    int iValue = 0;
    printf("enter number");
    scanf("%d",&iValue);
    DisplayDigit(iValue);
    return 0;
}