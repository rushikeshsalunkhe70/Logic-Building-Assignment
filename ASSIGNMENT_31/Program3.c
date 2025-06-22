//////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: Write a program which accept one number from user and toggle 7th bit of at number. Return modified number.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 16/06/2025
// pattern:
/*
Enter a number:
137
updated number is :201
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>


typedef unsigned int UINT;
UINT ToggleBit(UINT iNo )
{
   UINT iMask = 1;
   UINT iResult = 0;
   iMask = 1 << 6;
   
    iResult = iNo ^ iMask;
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