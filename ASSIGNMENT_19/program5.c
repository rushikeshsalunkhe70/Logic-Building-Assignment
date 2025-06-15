/////////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: Accept N numbers from user and accept one another number as NO
//return frequency of NO form it.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 31/05/2025
// pattern:
/*
Enter number of elements: 4
Enter 4 elements:
Enter element 1: 45
Enter element 2: 14
Enter element 3: 47
Enter element 4: 4
Enter number to find frequency of: 14
Frequency of 14 is: 1
*/
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int FrequencyOfNumber(int arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iNo = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory.\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter number to find frequency of: ");
    scanf("%d", &iNo);

    iRet = FrequencyOfNumber(p, iSize, iNo);
    printf("Frequency of %d is: %d\n", iNo, iRet);

    free(p);
    return 0;
}
