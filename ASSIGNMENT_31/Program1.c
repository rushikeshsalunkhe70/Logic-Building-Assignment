//////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.
// Date       : 16/06/2025
// pattern:
/*
Enter a number 
79
updated number is:15
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef unsigned int UINT;
UINT ofbit(UINT iNo)
{
 UINT iMask =1;
 UINT iResult =0;
 iMask = iMask <<6;
 iMask = ~iMask;

 iResult = iNo & iMask;
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