///////////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: accept number from user and return diff between sum of even and sum of odd
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 16/05/2025
// 
////////////////////////////////////////////////////////////////////
#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    return iEven - iOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}
