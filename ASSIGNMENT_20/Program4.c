//////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description:. Accept N numbers from user and accept Range, Display all elements from range
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 31/05/2025
// pattern:
/*
Enter number of elements: 5
Enter the starting point: 10
Enter the ending point: 20
Enter 5 elements:
Element 1: 14
Element 2: 1
Element 3: 2
Element 4: 71
Element 5: 16
14 16 

*/
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void Range(int arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;


    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(arr[iCnt] >= iStart && arr[iCnt] <= iEnd)
        {
            printf("%d ", arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0,iRet = 0;
    int iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    
    printf("Enter number of elements: ");
    scanf("%d", &iSize);
    printf("Enter the starting point: ");
    scanf("%d", &iValue1);
     printf("Enter the ending point: ");
    scanf("%d", &iValue2);

    

   
    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory.\n");
        return -1;
    }

    
    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    Range(p, iSize, iValue1, iValue2);

    
    free(p);
    return 0;
}
