///////////////////////////////////////////////////////////////////
// File Name  : Program2.c
// Description: Accept N numbers from user and display all such elements which are divisible by 5.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 31/05/2025
// pattern:
/*
Enter number of element:4
enter 4 element:
Enter element 1:12
Enter element 2:10
Enter element 3:1
Enter element 4:5
10 5 
*/
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void Display(int arr[],int iLength)
{
    int iCnt = 0;
    
    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if(arr[iCnt] % 5 == 0)
        {
           printf("%d ",arr[iCnt]);
        }
        
    }
    
    
}
int main()
{
    int iSize =0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of element:");
    scanf("%d",&iSize);
    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("enter %d element:\n",iSize);
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Display(p,iSize);
    free(p);
    return 0;
}