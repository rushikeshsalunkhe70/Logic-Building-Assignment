///////////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: calculate area of rectangle
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 14/05/2025
// 
////////////////////////////////////////////////////////////////////
#include<stdio.h>
double RectArea(float fWidth,float fHeight)
{
    
    float fArea = 0;
      
    {
        fArea = fWidth * fHeight;
    }
    return fArea;
}
int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f;
    double bRet = 0.0;

    printf("Enter Width :");
    scanf("%f",&fValue1);

    printf("Enter Height :");
    scanf("%f",&fValue2);

    bRet = RectArea(fValue1,fValue2);
    printf("Area of circle is %.2f",bRet);
    return 0;
}