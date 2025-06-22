//////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: Write a program which accept string from user and count number of capital characters.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 06/06/2025
// pattern:
/*
entre string:
Mravellou OS
capital character:3
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
int countcaptial(char *str)
{
    int iCount = 0;

   while(* str != '\0')
   {
    if((*str >= 'A') && (*str <= 'Z'))
    {
    iCount++;
    }
    str++;
   }
   return iCount;


}

int main()
{
    char arr[20];
    int iRet = 0;
    printf("entre string:\n");
    scanf("%[^'\n']s",arr);
    
    iRet = countcaptial(arr);
    printf("capital character:%d\n",iRet);
    
    return 0;
}