//////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: Write a program which checks whether 7th & 8th & 9th bit is On or off
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 16/06/2025
// pattern:
/*
Enter a number:
448
7th, 8th, and 9th  bits are ON
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool Chkbit(UINT iNo)  
{
   UINT iMask = 0x0000001c0;
   UINT iResult = iNo & iMask;
   
return (iResult == iMask);
}
   

   
int main()
{
    UINT iValue = 0;
     bool bRet = false;
    printf("Enter a number:\n");
    scanf("%d",&iValue);
    
  
    bRet = Chkbit(iValue);

    if (bRet)
    {
        printf("7th, 8th, and 9th  bits are ON\n");
    }
    else
    {
        printf("7th, 8th, and 9th  bit is OFF\n");
    }
   
    return 0;
}