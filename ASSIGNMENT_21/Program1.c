//////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: Accept N numbers from user and return the largest number.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 04/06/2025
// pattern:
/*
Enter number of elements:5
enter 5 element
enter element 1:85
enter element 2:47
enter element 3:41
enter element 4:12
enter element 5:36
Largest number is 85

*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int Maximum(int arr[],int iLength)
{
    int iCnt =0 ,iMax = arr[0];
    for(iCnt = 0; iCnt< iLength;iCnt++)
    {
        if(arr[iCnt] > iMax)
        {
            iMax = arr[iCnt];
        }
        
    }
    return iMax;
}
int main()
{
    int iSize =0 ,iRet = 0,iCnt = 0,iValue = 0;
    int *p = NULL;
    printf("Enter number of elements:");
    scanf("%d",&iSize);
    
    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("enter %d element\n",iSize);
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("enter element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Maximum(p,iSize);
    printf("Largest number is %d",iRet);
    free(p);
    return 0;
}