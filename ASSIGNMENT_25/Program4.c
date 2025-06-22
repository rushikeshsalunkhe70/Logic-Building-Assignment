//////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: Write a program which accept string from user and display only digits from that string.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 07/06/2025
// pattern:
/*
Enter string:Marvello2345  
2345
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
       
       if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
       
       
        str++;
    }
}
int main()
{
    char arr[20];
    printf("Enter string:");
    scanf("%[^'\n']s",arr);
    
    DisplayDigit(arr);
    

    return 0;
}