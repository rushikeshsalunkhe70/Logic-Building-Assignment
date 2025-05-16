///////////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: accept number from user and return count of digit in between 3 and 7
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 16/05/2025
// 
////////////////////////////////////////////////////////////////////
#include<stdio.h>
int CountRange(int iNo)
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
        if(iDigit > 3 && iDigit < 7)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
    


}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number");
    scanf("%d",&iValue);
    iRet = CountRange(iValue);
    printf("%d",iRet);
    return 0 ;
}