//////////////////////////////////////////////////////////////
// File Name  : Program5.c
// Description:. Accept N numbers from user and return product of all odd elements.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 31/05/2025
// pattern:
/*
Enter number of elements: 3
Enter 3 elements:
Element 1: 5
Element 2: 54
Element 3: 4
Product of all odd elements is: 5

*/
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int Product(int arr[], int iLength)
{
    int iCnt = 0;
    int imult = 1;
    int bOddFound = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(arr[iCnt] % 2 != 0)  
        {
            imult = imult* arr[iCnt];
            bOddFound = 1;
        }
    }

   
    if(bOddFound == 0)
    {
        return 0;
    }

    return imult;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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

    iRet = Product(p, iSize);
    
    if(iRet == 0)
    {
        printf("There are no odd elements.\n");
    }
    else
    {
        printf("Product of all odd elements is: %d\n", iRet);
    }

    free(p);
    return 0;
}
