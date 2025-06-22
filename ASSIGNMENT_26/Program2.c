//////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: Write a program which accept string from user and accept one character. Return frequency of that character.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 07/06/2025
// pattern:
/*
Enter a string:Rushii
Entera charcter:
i
Character frequency is 2
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountChar(char *str,char ch)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue;
    

    printf("Enter a string:");
    scanf("%[^'\n']s",arr);
    printf("Entera charcter:\n");
    scanf(" %c",&cValue);



int iret = CountChar(arr,cValue);
printf("Character frequency is %d\n",iret);
return 0;
}
    