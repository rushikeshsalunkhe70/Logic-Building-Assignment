///////////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: accept number of rows and columns and print pattern
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 28/05/2025
// pattern:
/*
Enter number of rows and column:4
4
1       2       3       4
1       @       @       4
1       @       @       4
1       2       3       4
*/
///////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0 , j = 0;
    for(i = 1;i <= iRow;i++)
    if(iRow  == iCol)
    {
        for(j = 1;j <= iCol ;j++)
        if(( j ==1 || j == iCol ) || (i == 1 || i == iRow))
        {
            printf("%d\t",j);
        }
        else
        {
            printf("@\t",j);
        }
        printf("\n");
    }

}

int main()
{
    int iValue = 0,iValue2 = 0;
    printf("Enter number of rows and column:");
    scanf("%d %d",&iValue,&iValue2);
    Pattern(iValue,iValue2);
    return 0;
}