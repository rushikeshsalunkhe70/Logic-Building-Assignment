//////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: .Write a program which checks whether 15th bit is On or OFF.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 16/06/2025
// pattern:
/*
Enter a number:
34200
15th bit is on
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
#define true 1
#define false 0
bool ChekBit15(UINT iNo)
{
  UINT iMask =  0x00008000;
  UINT iResult = 0;
  iResult = iNo & iMask;
  return(iResult == iMask); 

}
int main()
{
    UINT iValue =0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);
    bool bret = false;
    bret  = ChekBit15(iValue);
    if(bret == true)
    {
        printf("15th bit is on");
    }
    else
    {
        printf("15 bit is OFF");
    }


    return 0;
}