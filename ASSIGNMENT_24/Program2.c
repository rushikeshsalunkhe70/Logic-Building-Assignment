//////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: Write a program which accept string from user and count number of small characters.
// Date       : 06/06/2025
// pattern:
/*
entre string:
marvellos
character are:9
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
int countcaptial(char *str)
{
    int iCount = 0;

   while(* str != '\0')
   {
   
    {
    iCount++;
    str++;
    }
    
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
    printf("character are:%d\n",iRet);
    
    return 0;
}