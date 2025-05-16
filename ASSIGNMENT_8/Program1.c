///////////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: calculate area of circle
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 14/05/2025
// 
////////////////////////////////////////////////////////////////////
#include<stdio.h>
double CircleArea(float fRadius)
{
    float fPI = 3.14;
    float fArea = 0;
      
    {
        fArea = fPI * fRadius * fRadius;
    }
    return fArea;
}
int main()
{
    float fValue = 0.0f;
    double bRet = 0.0;

    printf("Enter Radius :");
    scanf("%f",&fValue);

    bRet =  CircleArea(fValue);
    printf("Area of circle is %.2f",bRet);
    return 0;
}