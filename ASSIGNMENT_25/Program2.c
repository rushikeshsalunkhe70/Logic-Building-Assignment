//////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: Write a program which accept string from user and convert it into upper case.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 07/06/2025
// pattern:
/*
Enter string:Marvellous
Modified string is:  MARVELLOUS
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
       
       
        str++;
    }
}
int main()
{
    char arr[20];
    printf("Enter string:");
    scanf("%[^'\n']s",arr);
    
    struprx(arr);
    printf("Modified string is:  %s",arr);

    return 0;
}