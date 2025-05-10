////////////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: accept one number from user if no is less than 10 print hello otherwise demo
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 09/05/2025
// 
////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;

}