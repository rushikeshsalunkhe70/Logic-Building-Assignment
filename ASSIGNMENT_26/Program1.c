//////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: I.Write a program which accept string from user and accept one echaracter. Check whether that character is present in string or not.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 07/06/2025
// pattern:
/*
Enter a string:rushi
enter a character:
r
character found
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#define true 1
#define false 0
bool checkchar(char *str,char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return true;
        }
        
        str++;
    }
    return false;
}
int main()
{
    char arr[20];
    char cValue;
    bool bret = false;

    printf("Enter a string:");
    scanf("%[^'\n']s",arr);

    printf("enter a character:\n");
    scanf(" %c",&cValue);

    bret = checkchar(arr,cValue);
    if(bret == true)
    {
        printf("character found");
    }
    else
    {
        printf("character not found");
    }
    return 0;
}