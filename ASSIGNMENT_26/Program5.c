//////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: Write a program which accept string from user reverse that string in place.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 07/06/2025
// pattern:
/*
Enter string:
abcd 
dcba
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
void ReverseDisplay(char *str)
{
    int icount = 0,iCnt = 0;

    
    while(*str != '\0')
    {
        
        icount++;
        str++;
    }
    str--;
    iCnt = icount;
    while (iCnt > 0)
    {
        printf("%c",*str);
        iCnt--,str--;
    }
    printf("\n");
}
int main()
{
    char arr[50]={'\0'};
    printf("Enter string:\n");
    scanf("%[^'\n]s",arr);

    ReverseDisplay(arr);
    return 0;
}