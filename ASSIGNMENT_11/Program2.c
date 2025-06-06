///////////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: accrpt number from user and pritn pattern 4 # 3 # 2 # 1 #
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 19/05/2025
// 
////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t", iCnt);
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
