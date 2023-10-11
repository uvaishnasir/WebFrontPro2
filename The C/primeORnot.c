#include <stdio.h>
#include <math.h>
// tHe Uv- prime-number-checker--
void main()
{
    int n, j = 0;
    printf("Enter the number you want to check\n");
    scanf("%d", &n);
    for (int i = 1; i <=sqrt(n); i++)   //Here! you can use (n-1) & n/2.
    {
        if (n % i == 0)
            j = j + 1;
    }
    if (j == 1)
        printf("Prime number\n");
    else
        printf("Not Prime\n");
}
