///////////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: accept number from user and return multiplication of all digit
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 16/05/2025
// 
////////////////////////////////////////////////////////////////////
#include<stdio.h>
int Multdigit(int iNo)
{
    int iDigit = 0;
    int iMult = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
   
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;
    


}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number");
    scanf("%d",&iValue);
    iRet = Multdigit(iValue);
    printf("%d",iRet);
    return 0 ;
}