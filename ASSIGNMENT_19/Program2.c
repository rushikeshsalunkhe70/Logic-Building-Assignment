///////////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: Accept N numbers from user and return difference between frequency of even numbers and odd number.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 31/05/2025
// pattern:
/*
Enter number of elements: 5
Enter 5 elements:
Enter element 1: 12
Enter element 2: 14
Enter element 3: 15
Enter element 4: 17
Enter element 5: 18

result: 1
*/
////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Frequency(int arr[], int iLength)
{
    int iCnt = 0, ieven = 0,iodd = 0;

    
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
       if(arr[iCnt] % 2 == 0)
       {
        ieven++;
       } 
       else
       {
        iodd++;
       }
    }
    printf("\n");

    return ieven - iodd;
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
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);
    printf("result: %d\n", iRet);

    free(p);
    return 0;
}
