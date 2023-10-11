#include <stdio.h>
//the Uv--typecasting.

void main()
{
    int c;
    float m, n;
    printf("enter the two no\n");
    scanf("%f%f", &m, &n);
    c = (int)m + (int)n;
    printf("M+N= %d\n", c);
    int a = 5;
    float b = (float)50 / 12;
    printf("The value of a is %d & The value of b is %.2f\n", a, b);

}
