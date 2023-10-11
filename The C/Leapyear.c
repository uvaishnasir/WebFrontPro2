#include <stdio.h>
//tHe Uv--29/05/2021--check leap year.
void main()
{
    int yr;
    printf("Enter the year you want to check\n");
    scanf("%d", &yr);
    /* usimg logical operator.
    (yr % 400 == 0) ? printf("Leap Year\n") : (yr % 4 == 0 && yr % 100 != 0) ? printf("Leap year\n")
                                                                             : printf("NOT leap year\n"); */

    if (yr % 400 == 0)
        printf("Leap year\n");
    else
    {
        if (yr % 4 == 0 && yr % 100 != 0)
            printf("Leap year\n");
        else
            printf("Not leap year\n");
    }
}
