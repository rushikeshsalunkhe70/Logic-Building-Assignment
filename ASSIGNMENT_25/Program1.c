//////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: Write a program which accept string from user and convert it into lower case.
// Date       : 07/06/2025
// pattern:
/*
Enter string:MArvelllous OS
Modified string is:  marvelllous os
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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
    
    strlwrx(arr);
    printf("Modified string is:  %s",arr);

    return 0;
}