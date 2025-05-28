///////////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: accrpt number from user and pritn pattern 
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 21/05/2025
// 
////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0,start =1;

    for(i = 1; i <= iRow; i++)
    {
        int iNo = start; 
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t",  iNo);
                iNo++;
            }
        }
        start = start + (i);
      
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
