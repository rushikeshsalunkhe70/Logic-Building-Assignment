/////////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description:Accept N numbers from user and accept one another number as NO
//return index of first occurrence of that NO.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 31/05/2025
// pattern:
/*
Enter number of elements: 4
Enter  the number:66
Enter 4 elements:
Enter element 1: 41
Enter element 2: 45
Enter element 3: 66
Enter element 4: 78
First occurrence of number is 2
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            return iCnt; 
        }
    }
    return -1;  
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
        printf("First occurrence of number is %d", iRet);
    }

    free(p);
    return 0;
}
