#include <stdio.h>
#include <stdlib.h>

void main()
{
    char *E_ID, a, b;
    int n, i = 0;
    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee ID:\n", i + 1);
        scanf("%d", &n);
        getchar();
        printf("Enter the value of a\n");
        scanf("%c", &a);
        getchar();
        printf("Enter the value of b\n");
        scanf("%c", &b);
        getchar();
        E_ID = (char *)malloc((n + 1) * sizeof(char));
        printf("Enter your Employee ID:\n");
        scanf("%s", E_ID);
        printf("***Your Employee ID is %s\n", E_ID);
        free(E_ID);
        i = i + 1;
    }
}
