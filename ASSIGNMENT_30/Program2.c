//////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description:. Write a program which checks whether 5th & 18th bit is On or OFF.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 16/06/2025
// pattern:
/*
Enter a number:
132504
5th and 18th bits are ON
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool ofbit(UINT iNo)  
{
   UINT iMask1 = 1,iMask2 = 1;
   UINT iResult = 0;
   iMask1 = iMask1 <<4;
   iMask2 = iMask2 <<17;

   iResult = iNo & iMask1;
    if(iResult == 0)
    {
        return false;  
    }

    iResult = iNo & iMask2;
    if(iResult == 0)
    {
        return false;  
    }

    return true;


}
int main()
{
    UINT iValue = 0;
     bool bRet = false;
    printf("Enter a number:\n");
    scanf("%d",&iValue);
    
  
    bRet = ofbit(iValue);

    if (bRet)
    {
        printf("5th and 18th bits are ON\n");
    }
    else
    {
        printf("5th and 18th bit is OFF\n");
    }
   
    return 0;
}