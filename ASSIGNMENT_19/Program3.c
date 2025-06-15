//////////////////////////////////////////////////////////////////
// File Name  : Program3.c
// Description: Accept N numbers from user check whether that numbers contains 11 it or not.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 31/05/2025
// pattern:
/*
Enter number of elements: 4
Enter 4 elements:
Enter element 1: 4
Enter element 2: 11
Enter element 3: 22
Enter element 4: 11 
11 is present
*/
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int CheckEleven(int arr[], int iLength)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (arr[iCnt] == 11)
        {
            return 1;  
        }
    }
    return 0; 
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

    iRet = CheckEleven(p, iSize);
    if (iRet == 1)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is not present\n");
    }

    free(p);
    return 0;
}
