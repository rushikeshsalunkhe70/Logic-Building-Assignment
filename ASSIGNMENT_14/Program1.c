///////////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: accrpt number from user and pritn pattern 
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 21/05/2025
// pattern :
/*
Enter number of rows:4
Enter a number  of columns:4
1       2       3       4
5       6       7       8
9       1       2       3
4       5       6       7
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern(int iRow ,int iCol)
{
  int i=0;
  int j =0;
  int iNo =1 ;
  for(i = 1;i <= iRow;i++)
  {
    for(j = 1;j <= iCol;j++)
   
    {
        printf("%d\t",iNo);
        iNo++;
       if(iNo > 9)
       {
        iNo = 1;
       }
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