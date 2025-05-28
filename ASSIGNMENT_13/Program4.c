///////////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: accrpt number from user and pritn pattern 
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 21/05/2025
// pattern:
/*
Enter number of rows:4
Enter a number  of columns:4
4       4       4       4
3       3       3       3
2       2       2       2
1       1       1       1
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern(int iRow ,int iCol)
{
  int i=0;
  int j =0;
  int icnt = 0 ;
  for(i = 1,icnt = iRow;i <= iRow;i++,icnt--)
  {
    for(j = 1;j <= iCol;j++)
   
    {
        printf("%d\t",icnt);
    }
    
    
    printf("\n");
  }

}

int main()
{ 
    int ivalue1 = 0,ivalue2 = 0;
    printf("Enter number of rows:");
    scanf("%d",&ivalue1);
    printf("Enter a number  of columns:");
    scanf("%d",&ivalue2);
    Pattern(ivalue1,ivalue2);
    return 0;
}