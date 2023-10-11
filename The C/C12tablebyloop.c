#include <stdio.h>
//table by loop---the Uv

int main()
{
    int num, i, j;
    printf("Enter the number you want to multiplication of\n");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
