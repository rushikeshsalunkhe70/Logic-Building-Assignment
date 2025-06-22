//////////////////////////////////////////////////////////////
// File Name  : Program4.c
// Description: Accept N numbers from user and display all such numbers which contains 3 digits in it..
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 04/06/2025
// pattern:
/*Enter number of elements: 5
Enter 5 elements:
Element 1: 14
Element 2: 25
Element 3: 236
Element 4: 789
Element 5: 554
236 789 554 

*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Digits(int arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       
        if((arr[iCnt] >= 100 && arr[iCnt] <= 999) || (arr[iCnt] <= -100 && arr[iCnt] >= -999) )
        {
            printf("%d ", arr[iCnt]);
        }
    }
    printf("\n");
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
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    Digits(p, iSize);

    free(p);
    return 0;
}
