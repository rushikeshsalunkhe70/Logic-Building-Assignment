///////////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: convert square feet into square meter
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 14/05/2025
// 
////////////////////////////////////////////////////////////////////
#include<stdio.h>
double SquareMeter(int iValue)
{
  double fSquarefeet = 0.0;
  double fSquareMeter = 0.0929;
  fSquarefeet  = iValue * fSquareMeter;

  return fSquarefeet;
}

int main()
{

    int iValue = 0;
    double bRet = 0.0;

    printf("Enter area in square feet");
    scanf("%d",&iValue);
    bRet = SquareMeter(iValue);
    printf("square meter is %.2f",bRet);
    return 0;
}