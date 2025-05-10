////////////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: Accept no from user print it's even factor
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 10/05/2025
// 
////////////////////////////////////////////////////////////////////

#include<stdio.h>
void DisplayFactor(int iNo)
{  
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
        printf("%d\n", iNo);

    }
    
    for(i = 1;i<=iNo/2;i++)
    {
        if(iNo % i == 0)
        {
            printf("%d ",i);
           
        }
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter a number \n");
    scanf("%d",&iValue);
    DisplayFactor(iValue);

    return 0;
}