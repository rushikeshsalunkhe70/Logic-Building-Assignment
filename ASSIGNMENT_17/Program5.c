///////////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: accept number of rows and columns and print pattern
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 28/05/2025
// pattern:
/*
  Enter a number of rows :
4
Enter a number of  column:
4
1       2       3       4
1       2               4
1               3       4
1       2       3       4
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>

#include<stdio.h>
void pattern(int iRow ,int iCol)
{

    int i=0;
    int j = 0;
    for(i = 1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i == j)
            {
                printf("%d\t",j);
            }
            
              else if((j ==1 || j == iCol) || (i ==1 || i == iRow))
           
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
    int iValue1 = 0,iValue2 = 0;
    printf("Enter a number of rows :\n");
    scanf("%d",&iValue1);
    printf("Enter a number of  column:\n");
    scanf("%d",&iValue2);
    pattern(iValue1,iValue2);
}