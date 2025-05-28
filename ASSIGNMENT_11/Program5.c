///////////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: accrpt number from user and pritn pattern 2 4 6 8
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 19/05/2025
// 
////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iNo1 = 2;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d \t", iNo1);
        iNo1 = iNo1 + 2;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
