//////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description: Accept N numbers from user and display summation of digits of each number.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 04/06/2025
// pattern:
/*
Enter number of elements: 5
Enter 5 elements:
Element 1: 8225
Element 2: 665
Element 3: 5
Element 4: 86
Element 5: 953
Sum of digits of 8225 is: 17
Sum of digits of 665 is: 17
Sum of digits of 5 is: 5
Sum of digits of 86 is: 14
Sum of digits of 953 is: 17

*/
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void DigitSum(int arr[], int iLength)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iNo = arr[iCnt];
        int iSum = 0;
        int iDigit = 0;

        
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("Sum of digits of %d is: %d\n", arr[iCnt], iSum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

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

    DigitSum(p, iSize);

    free(p);
    return 0;
}
