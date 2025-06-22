//////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: Write a program which accept one number from user and off 7th and 10th bit of that number. Return modified number.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 16/06/2025
// pattern:
/*
Enter a number 
577
updated number is:1
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef unsigned int UINT;
UINT ofbit(UINT iNo)
{
 UINT iMask =1,iMask1=1;
 UINT iResult =0;
 iMask = iMask <<6;
 iMask1 = iMask1 <<9;
 iMask = ~iMask;
  iMask1 = ~iMask1;

 iResult = iNo & iMask;
 iResult = iResult & iMask1;
 return(iResult);

}
int main()
{
    UINT iValue =0;
    printf("Enter a number \n");
    scanf("%u",&iValue);

     int iret = ofbit(iValue);
    printf("updated number is:%u",iret);



    return 0;
}