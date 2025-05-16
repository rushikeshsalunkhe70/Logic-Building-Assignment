///////////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: accept number from user and count frequency of 2 in it
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 15/05/2025
// 
////////////////////////////////////////////////////////////////////
#include<stdio.h>
int CountTwo(int iNo)
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
        if(iDigit == 2)
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
    iRet = CountTwo(iValue);
    printf("%d",iRet);
    return 0 ;
}