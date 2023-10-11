#include <stdio.h>
// the Uv--GO TO statements

int main()
{
    // label:
    //     printf("we are inside loop\n");
    //     goto end;

    // printf("tHe Uv\n");
    // goto label;
    // end:
    int n;
    for (int i = 0; i <= 5; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j <= 5; j++)
        {
            printf("Enter the number, Enter 0 to exit\n");
            scanf("%d", &n);
            if (n == 0)
            {
                goto end;
            }
        }
    }
end:
    return 0;
}