//////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: Write a program which accept string from user and toggle the case.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 07/06/2025
// pattern:
/*
Enter string:Marvellous OS
Modified string is:  mARVELLOUS os
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
void strtoggleex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
       
       
        str++;
    }
}
int main()
{
    char arr[20];
    printf("Enter string:");
    scanf("%[^'\n']s",arr);
    
    strtoggleex(arr);
    printf("Modified string is:  %s",arr);

    return 0;
}