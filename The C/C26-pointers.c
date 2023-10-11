#include <stdio.h>
void main()
{
    int a = 7;
    int *ptr = &a;
    char s[2] = "UV";
    char *p = s;
    for (int i = 0; i < 2; i++)
    {
        printf("%c\n", s[i]);
        printf("%p\n", &s[i]);
        printf("%c\n", *(p + i));
        printf("%p\n", (p + i));
    }
    printf("%d\n", a);
    printf("%p\n", &a);
    printf("%d\n", *ptr);
    printf("%p\n", ptr);
}
