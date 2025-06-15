///////////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: Accept N numbers from user and display all such elements which are multiples of 11.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 31/05/2025
// pattern:
/*
Enter a number element:4
Enter 4 element
enter element 1:44
enter element 2:15
enter element 3:77
enter element 4:46
44 77
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void Display(int arr[],int iSize)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
    if((arr[iCnt] % 11 == 0) )
    {
        printf("%d ",arr[iCnt]);
    }
}
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int * p =NULL;
    printf("Enter a number element:");
    scanf("%d",&iSize);
    p = (int *)malloc(iSize*sizeof(int));
    if(p== NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("Enter %d element\n",iSize);
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("enter element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Display(p,iSize);
    free(p);


    return 0;
}