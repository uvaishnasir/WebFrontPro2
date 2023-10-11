#include <stdio.h>
#include <process.h>

int main()
{
    //the Uv- break continue statementsc
    int age;
    for (int i = 0; i < 15; i++)
    {
        printf("%d\n", i);
        printf("Enter your age\n");
        scanf("%d", &age);
        if (age > 20)
        {
            break;
        }
        if (age > 10)
        {
            continue;
        }
        printf("tHe Uv\n");
        printf("Mr Uv\n");
    }
    return 0;
}