///////////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: accrpt number from user and pritn pattern 
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 21/05/2025
// pattern:
/*
Enter number of rows:4
Enter a number  of columns:4
A       B       C       D
A       B       C       D
A       B       C       D
A       B       C       D
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern(int iRow ,int iCol)
{
  int i=0;
  int j =0;
  char ch = '\0';
  for(i = 1;i <= iRow;i++)
  {
    for(j = 1,ch = 'A';j <= iCol;j++,ch++)
    {
        printf("%c\t",ch);
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