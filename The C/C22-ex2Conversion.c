#include <stdio.h>
//tHe Uv--conversion exercise--23/05/2021
void main()
{
    int number;
    float n;
    printf("Enter the corresponding number in which you want to convert:\n");
start:
    printf("\t1-Kilometres to Miles\n");
    printf("\t2-Inches to Feet\n");
    printf("\t3-Centimetres to Kilograms\n");
    printf("\t4-Pound to Kilograms\n");
    printf("\t5-Inches to Metres\n");
    printf("\t6-Centimetres to Feet\nEnter 0 to Exit\n");
    scanf("%d", &number);
    if (number == 1)
    {
        printf("Enter the value in Kilometres\n");
        scanf("%f", &n);
        printf("Corresponding Miles value = %.4f\n", (n * 0.621371));
        goto start;
    }
    else if (number == 2)
    {
        printf("Enter the value in Inches\n");
        scanf("%f", &n);
        printf("Corresponding foot value = %.4f\n", (n / 12));
        goto start;
    }
    else if (number == 3)
    {
        printf("Enter the value in cubic CMs\n");
        scanf("%f", &n);
        printf("Corresponding KGs value= %.4f\n", (0.001 * n));
        goto start;
    }
    else if (number == 4)
    {
        printf("Enter the value in Pounds\n");
        scanf("%f", &n);
        printf("Corresponding KGs value= %.5f\n", (0.453592 * n));
        goto start;
    }
    else if (number == 5)
    {
        printf("Enter the value in Inches\n");
        scanf("%f", &n);
        printf("Corresponding Metres valus= %.4f\n", (0.0254 * n));
        goto start;
    }
    else if (number == 6)
    {
        printf("Enter the value in Cms\n");
        scanf("%f",&n);
        printf("Corresponding Feet value= %.4f\n", (0.0328084*n));
        goto start;
    }
    else if (number == 0)
    {
        printf("Thank you! for using the Conversion.");
    }
}
