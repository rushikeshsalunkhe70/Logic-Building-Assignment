//////////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: Accept N numbers from user and return frequency of 11 form it.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 31/05/2025
// pattern:
/*
Enter number of elements: 4
Enter 4 elements:
Enter element 1: 11
Enter element 2: 45
Enter element 3: 44
Enter element 4: 11
Frequency of 11 is: 2
*/
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int FrequencyOfEleven(int arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (arr[iCnt] == 11)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    iRet = FrequencyOfEleven(p, iSize);
    printf("Frequency of 11 is: %d\n", iRet);

    free(p);
    return 0;
}
