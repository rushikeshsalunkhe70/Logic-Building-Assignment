///////////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: convert kilometer into meter
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 14/05/2025
// 
////////////////////////////////////////////////////////////////////
#include<stdio.h>
int KMtoMeter(int iNo)
{
   return iNo * 1000;
}
int main()
{

    int iValue = 0;
    int iRet = 0;
    printf("Enter distance");
    scanf("%d",&iValue);
    iRet = KMtoMeter(iValue);
    printf("distance are %d meter ",iRet);
    return 0;
}