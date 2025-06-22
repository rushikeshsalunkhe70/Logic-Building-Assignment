//////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: Accept N numbers from user and return the difference between largest
//and smallest number.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 04/06/2025
// pattern:
/*
Enter number of elements:4
enter 4 element
enter element 1:14
enter element 2:7
enter element 3:85
enter element 4:26
difference is 78

*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int Difference(int arr[],int iLength)
{
    int iCnt =0 ,iMin = arr[0],iMax = 0;
    for(iCnt = 0; iCnt< iLength;iCnt++)
    {
        if(arr[iCnt] < iMin )
        {
            iMin = arr[iCnt];
        }
        if( arr[iCnt] > iMax)
        {
            iMax = arr[iCnt];
        }
        
    }
    return iMax - iMin;
}
int main()
{
    int iSize =0 ,iRet = 0,iCnt = 0;
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
    iRet = Difference(p,iSize);
    printf("difference is %d",iRet);
    free(p);
    return 0;
}