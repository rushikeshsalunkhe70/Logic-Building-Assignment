///////////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: Accept N numbers from user and return difference between summation even elements and summation of odd elements.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 31/05/2025
// pattern:
/*
Enter number of element:4
enter 4 element:
Enter elemen 1:10
Enter elemen 2:15
Enter elemen 3:12
Enter elemen 4:1
maximum element is:22
minimum element is:16
result is 6
*/
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int Difference(int arr[],int iLength)
{
    int iCnt = 0,ievensum = 0,ioddsum=0;
    
    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if(arr[iCnt] % 2 == 0)
        {
           ievensum = ievensum + arr[iCnt];
        }
        else
        {
           ioddsum = ioddsum + arr[iCnt];
        }
    }
    printf("maximum element is:%d\n",ievensum);
   printf("minimum element is:%d\n",ioddsum);
   return ievensum - ioddsum;
    
}
int main()
{
    int iSize =0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of element:");
    scanf("%d",&iSize);
    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("enter %d element:\n",iSize);
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter elemen %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Difference(p,iSize);
    printf("result is %d",iRet);
    free(p);
    return 0;
}