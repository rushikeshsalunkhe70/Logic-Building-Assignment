/////////////////////////////////////////////////////////////////
// File Name  : Program1.c
// Description: Accept N numbers from user and accept one another number as NO
//check whether NO is present or not.
// Author     : Rushikesh Gajanan Salunkhe
// Date       : 31/05/2025
// pattern:
/*
Enter number of element:6
Enter  the number:85
Enter 6 element
enter element 1:45
enter element 2:85
enter element 3:14
enter element 4:85
enter element 5:12
enter element 6:17
number is present
*/
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int arr[],int iLength,int iNo)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            return true;
        }
    }
     return false;

}
int main()
{
  int iSize = 0,iCnt = 0,iRet =0,iValue =0;
  int *p = NULL;
  bool bRet = false;
  printf("Enter number of element:");
  scanf("%d",&iSize);
  printf("Enter  the number:");
  scanf("%d",&iValue);

  p = (int *)malloc(iSize * sizeof(int));
  if(p == NULL)
  {
    printf("unable to allocate memory");
    return -1;
  }
  printf("Enter %d element\n",iSize);
  for(iCnt = 0;iCnt <iSize;iCnt++)
  {
    printf("enter element %d:",iCnt+1);
    scanf("%d",&p[iCnt]);
  }
  bRet = Check(p,iSize,iValue);
  if(bRet == true)
  {
    printf("number is present");
  }
  else
  {
    printf("number is not present");

  }
  free(p);

  
    return 0;
}