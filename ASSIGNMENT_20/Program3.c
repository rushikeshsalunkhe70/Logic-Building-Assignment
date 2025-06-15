//////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description:Accept N numbers from user and accept one another number as NC
//return index of last occurrence of that NO..
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 31/05/2025
// pattern:
/*
Enter number of elements: 4
Enter  the number:45
Enter 4 elements:
Enter element 1: 14
Enter element 2: 66
Enter element 3: 74
Enter element 4: 45
last occurrence of number is 3
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iValue = -1;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iValue =  iCnt; 
        }
    }
    return iValue;  
}

int main()
{
    int iSize = 0, iValue = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);
    printf("Enter  the number:");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory.\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

   
    iRet = FirstOcc(p, iSize, iValue);
    if(iRet == -1)
    {
        printf("there is no such number");
    }
    else
    {
        printf("last occurrence of number is %d", iRet);
    }

    free(p);
    return 0;
}
