//////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit number 32.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 16/06/2025
// pattern:
/*
Enter a number:
2147483649
First and last  bits are ON
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool Chkbit(UINT iNo)  
{
   UINT iMask = 0x80000001;
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
        printf("First and last  bits are ON\n");
    }
    else
    {
        printf("First and last  bit is OFF\n");
    }
   
    return 0;
}