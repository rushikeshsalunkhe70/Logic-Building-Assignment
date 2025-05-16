///////////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: Faherenheit to celcius
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 14/05/2025
// 
////////////////////////////////////////////////////////////////////
#include<stdio.h>
double FhtoCs(float fFahrenheit)
{
    
    float fCelsius = 0.0f;
      
    {
        fCelsius = (fFahrenheit - 32) * (5.0f/9.0f );
    }
    return fCelsius;
}
int main()
{
    float fValue = 0.0f ;
    double bRet = 0.0;

    printf("Enter temperature :");
    scanf("%f",&fValue);

    

    bRet = FhtoCs(fValue);
    printf("celcius is %f",bRet);
    return 0;
}