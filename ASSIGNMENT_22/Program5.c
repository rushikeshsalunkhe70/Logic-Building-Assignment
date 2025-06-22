//////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: Accept division of student from user and depends on the division display exam timing. 
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 05/06/2025
// pattern:
/*
Enter your division: a
Your exam at 7:00 AM
*/
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<ctype.h>

void DisplaySchedule(char chDiv)
{
    chDiv = toupper(chDiv);
    

    if(chDiv == 'A')
    {
        printf("Your exam at 7:00 AM\n");
    }
    else if(chDiv == 'B')
    {
        printf("Your exam at 8:30 AM\n");
    }
    else if(chDiv == 'C')
    {
        printf("Your exam at 9:20 AM\n");
    }
    else if(chDiv == 'D')
    {
        printf("Your exam at 10:30 AM\n");
    }
    else
    {
        printf("Invalid Division\n");
    }
}

int main()
{
    char cValue = '0';
    

    printf("Enter your division: ");
    scanf(" %c", &cValue);  

    DisplaySchedule(cValue);

    return 0;
}
