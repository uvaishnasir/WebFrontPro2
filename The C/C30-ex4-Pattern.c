#include <stdio.h> //28/06/2021
void main()
{
    int n,a,b;
    printf("Enter 0 to print triangular star pattern & Enter 1 to print reverse triangular star pattern:\n");
    scanf("%d",&n);
    if (n==0)
    {
        printf("Enter the no. of rows\n");
        scanf("%d",&a);
        for (int i = 1; i <=a; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else if (n==1)
    {
        printf("Enter the no. of rows\n");
        scanf("%d",&b);
        for (int i = b; i >=1; i--)
        {
            for (int j = 0; j < i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else
    printf("Wrong Input");
}