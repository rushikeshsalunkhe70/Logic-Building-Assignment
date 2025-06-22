//////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 06/06/2025
// pattern:
/*
Enter a string: MArvellous
6
*/
////////////////////////////////////////////////////////////////////
#include <stdio.h>

int DifferenceCapitalSmall(char *str)
{
    int i = 0, small = 0, capital = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            small++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capital++;
        }
        i++;
    }

    return small - capital;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s", arr);  

    iRet = DifferenceCapitalSmall(arr);

    printf("%d\n", iRet);

    return 0;
}
