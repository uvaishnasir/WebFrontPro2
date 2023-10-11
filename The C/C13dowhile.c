#include <stdio.h>
//do while loop
//18/05/2021

int main()
{
    int no, index = 0;
    printf("Enter the number\n");
    scanf("%d", &no);
    do
    {
        printf("%d\n", index);
        index += 1;
    } while (index < no);
    return 0;
}
