////////////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: Accept one no from user print that number of *
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 09/05/2025
// 
////////////////////////////////////////////////////////////////////

#include <stdio.h>
 void Display(int iNo)
 {
    int iCnt = 0;
     while(iCnt < iNo)
     {
        printf("*");
        iCnt++;
     }

 }
 int main()
 {
    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
 }