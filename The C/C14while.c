#include <stdio.h>
//while loop
//18/05/2021

int main()
{
    int num, i = 0;
    printf("Enter the number\n");
    scanf("%d", &num);
    while (i < num)
    {
        printf("%d\n", i);
        i += 1;
    }

    return 0;
}
