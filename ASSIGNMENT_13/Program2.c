///////////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: accrpt number from user and pritn pattern 
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 21/05/2025
// pattern:
/*
Enter number of rows:4
Enter a number  of columns:4
A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern(int iRow ,int iCol)
{
  int i=0;
  int j =0;
  char ch1 = 'A' ,ch2 = 'a';
  for(i = 1;i <= iRow;i++)
  {
    for(j = 1,ch1 = 'A',ch2 = 'a';j <= iCol;j++,ch1++,ch2++)
    if(i % 2 != 0)
    {
        printf("%c\t",ch1);
    }
    else
    {
        printf("%c\t",ch2);
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