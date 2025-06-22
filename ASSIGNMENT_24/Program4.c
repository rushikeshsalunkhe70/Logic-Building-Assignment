//////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: Write a program which accept string from user and check whether it contains vowels in it or not.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 06/06/2025
// pattern:
/*
Enter a string: marvellous
contains vowels
*/
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>

bool CheckVowels(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            return true;  
        }
        i++;
    }

    return false;  
}

int main()
{
    char arr[100];
    bool bRet = false;

    printf("Enter a string: ");
    scanf("%[^'\n']s", arr);  
    bRet = CheckVowels(arr);

    if (bRet)
    {
        printf("contains vowels\n");
    }
    else
    {
        printf("there is no vowels\n");
    }

    return 0;
}
