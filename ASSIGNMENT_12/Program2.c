///////////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: accrpt number from user and pritn pattern 
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 19/05/2025
// pattern:
/*
Enter number of rows: 4
Enter number of column: 4
1       2       3       4
1       2       3       4
1       2       3       4
1       2       3       4
*/
////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
     for(i =1 ;i <= iRow;i++)
     {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",j);
        }
         printf("\n");
    }
     

    
    
}

int main()
{
    int iValue = 0;
    int iValue1 = 0;


    printf("Enter number of rows: ");
    scanf("%d", &iValue);
    printf("Enter number of column: ");
    scanf("%d", &iValue1);


    Pattern(iValue,iValue1);

    return 0;
}
