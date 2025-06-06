///////////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: accept number from user and pritn pattern 
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 21/05/2025
// pattern:
/*
Enter number of rows: 4
Enter number of columns: 4
1        2       3       4
-1      -2      -3      -4
1        2       3       4
-1      -2      -3      -4
*/
////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)  
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t",  j);
            }
        }
        else 
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", -j);
            }
        }
        printf("\n");
    }
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter number of rows: ");
    scanf("%d", &ivalue1);

    printf("Enter number of columns: ");
    scanf("%d", &ivalue2);

    Pattern(ivalue1, ivalue2);

    return 0;
}
