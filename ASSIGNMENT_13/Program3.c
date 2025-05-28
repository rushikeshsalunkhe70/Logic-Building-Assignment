///////////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: accrpt number from user and pritn pattern 
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 21/05/2025
// pattern:
/*
Enter number of rows:4
Enter a number  of columns:4
A       A       A       A
B       B       B       B
C       C       C       C
D       D       D       D
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern(int iRow ,int iCol)
{
  int i=0;
  int j =0;
  char ch1 = 'A' ;
  for(i = 1,ch1 = 'A';i <= iRow;i++,ch1++)
  {
    for(j = 1;j <= iCol;j++)
   
    {
        printf("%c\t",ch1);
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