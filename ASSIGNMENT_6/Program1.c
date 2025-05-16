////////////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: if number id < 50 print small < 50 and >100 print medium and >100 print large
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 13/05/2025
// 
////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("%d is small\n",iNo);
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("%d is medium",iNo);
    }
    else
    {
        printf("%d is large",iNo);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);
    Number(iValue);
    
    
    return 0;


}