///////////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: accept number of rows and columns and print pattern
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 28/05/2025
// pattern:
/*
Enter a number of rows and column:
4
4
1       2       3       4
        2       3       4
                3       4
                        4

*/
///////////////////////////////////////////////////////////////////
#include<stdio.h>
void pattern(int iRow ,int iCol)
{

    int i=0;
    int j = 0;
    for(i = 1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(j >= i)
            {
                printf("%d\t",j);
            }
           
           else
           {
            printf("\t");
           }
        }
        printf("\n");
    }
}
int main()
{
    int iValue = 0,iValue2 = 0;
    printf("Enter a number of rows and column:\n");
    scanf("%d %d",&iValue,&iValue2);
    pattern(iValue,iValue2);
}