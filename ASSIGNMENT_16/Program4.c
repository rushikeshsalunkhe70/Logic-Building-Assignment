///////////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: accept number of rows and columns and print pattern
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 28/05/2025
// pattern:
/*
Enter a number of rows and columns :
6
6
*       *       *       *       *       *
*       *                               *
*               *                       *
*                       *               *
*                               *       *
*       *       *       *       *       *

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
            if(i == j)
            {
                printf("*\t");
            }
            
              else if((j ==1 || j == iCol) || (i ==1 || i == iRow))
           
            {
                printf("*\t");

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
    printf("Enter a number of rows and columns :\n");
    scanf("%d %d",&iValue1,&iValue2);
    
    pattern(iValue1,iValue2);
}