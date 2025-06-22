//////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: Accept N numbers from user and return the smallest number.
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
smallest number is 12

*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int Minimum(int arr[],int iLength)
{
    int iCnt =0 ,iMin = arr[0];
    for(iCnt = 0; iCnt< iLength;iCnt++)
    {
        if(arr[iCnt] < iMin)
        {
            iMin = arr[iCnt];
        }
        
    }
    return iMin;
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
    iRet = Minimum(p,iSize);
    printf("Smallest number is %d",iRet);
    free(p);
    return 0;
}