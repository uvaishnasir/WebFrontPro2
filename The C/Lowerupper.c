#include <stdio.h>
//tHe Uv--upper & lower case check--29/05/2021 
int main()
{
    char c;
    printf("Enter the character you want to check\n");
    scanf("%c", &c);
    if (c >= 65 && c <= 90)
    {
        printf("Upper Case Character\n", c);
    }
    else if (c >= 97 && c <= 122)
    {
        printf("Lower Case Character\n", c);
    }
    else if (c >= 48 && c <= 57)
    {
        printf("Number\n", c);
    }
    else
    {
        printf("Symbol\n", c);
    }
    return 0;
}