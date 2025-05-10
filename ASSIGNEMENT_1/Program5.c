////////////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: Accept one number from user and print 5 times "*" on screen 
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 09/05/2025
// 
////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt <= iNo ; iCnt++)
    {
        printf("*");
    }

}
int main()
{
    int iValue = 0;
    iValue = 5;
    Accept(iValue);
    return 0;
}
