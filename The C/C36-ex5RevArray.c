#include <stdio.h> //UV- 01/07/2021
void arrayrev(int*arr)
{
    int t;
    printf("The array is:\n");
   for (int i = 0; i < 5; i++)
   {
       printf("%d\t",*(arr+i));
   }
    t=*arr;
    *arr=*(arr+4);
    *(arr+4)=t;
    t=*(arr+1);
    *(arr+1)=*(arr+3);
    *(arr+3)=t;
    printf("\nNow the reverse array is:\n");
   for (int i = 0; i < 5; i++)
   {
       printf("%d\t",*(arr+i));
   }

}
void main()
{
    int array[]= {3,5,7,9,11};   // to prtint  11,9,7,5,3
    arrayrev(array);

}