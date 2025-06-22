//////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: Write a program which accept string from user and count number of white spaces
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 07/06/2025
// pattern:
/*
Enter string:Marefgg bbdhdh
number of white spaces: 1
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
int CountWhite(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iret = 0;
    printf("Enter string:");
    scanf("%[^'\n']s",arr);
    
    iret = CountWhite(arr);
    printf("number of white spaces: %d",iret);
    

    return 0;
}