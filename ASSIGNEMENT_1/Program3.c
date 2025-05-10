////////////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: Print 5 to 1 on screen
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 09/05/2025
// 
////////////////////////////////////////////////////////////////////

#include <stdio.h>
void Display()
{
    int i = 5;
    
    while ((i>=1))
    {
        printf("%d \n",i);
        i--;
    }
    
}
int main()
{
    Display();
    return 0;
}