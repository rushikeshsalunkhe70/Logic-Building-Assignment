
//////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: Write a program which accept one number from user and on its first 4 bits. Return modified number.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 16/06/2025
// pattern:
/*
Enter a number:
73
updated number is :79
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>


typedef unsigned int UINT;
UINT ToggleBit(UINT iNo )
{
   UINT iMask = 15;
   UINT iResult = 0;
  
   
    iResult = iNo | iMask;

    return(iResult);


}
int main()
{
    UINT iValue = 0;
    printf("Enter a number:\n");
    scanf("%u",&iValue);
   

  
    int iret = ToggleBit(iValue);
    printf("updated number is :%u\n",iret);
   
    return 0;
}