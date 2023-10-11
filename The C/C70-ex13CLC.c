#include <stdio.h> //02/08/2021-UV   //CLC
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *operation;
    int n1, n2;
    operation = argv[1];
    n1 = atoi(argv[2]);
    n2 = atoi(argv[3]);
    //for checking the command.
    // printf("operation is %s\n", operation);
    // printf("n1 is %d\n", n1);
    // printf("n2 is %d\n", n2);
    if (strcmp(operation, "add") == 0)
    {
        printf("Answer = %d\n", n1 + n2);
    }
    else if (strcmp(operation, "subtract") == 0)
    {
        printf("Answer = %d\n", n1 - n2);
    }
    else if (strcmp(operation, "divide") == 0)
    {
        printf("Answer = %d\n", n1 / n2);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("Answer = %d\n", n1 * n2);
    }
}
