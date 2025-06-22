//////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: Write a program which checks whether 7th & 15th & 21st , 28th bit On or OFF.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 16/06/2025
// pattern:
/*
Enter a number:
135415104
7th,15th,21st and 28th bits are ON
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool Chkbit(UINT iNo)  
{
   UINT iMask = 0x08004040;
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
        printf("7th,15th,21st and 28th bits are ON\n");
    }
    else
    {
        printf("7th,15th,21st and 28th bit is OFF\n");
    }
   
    return 0;
}