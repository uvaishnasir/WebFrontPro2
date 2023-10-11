#include <stdio.h>
//tHe Uv.
//switch case.

int main()
{
    int voltage, type;
    printf("Enter your voltage\n");
    scanf("%d", &voltage);
    switch (voltage)
    {
    case 230:
        printf("Your Voltage is 230\n");
        printf("Enter your voltage type 1 or 2\n");
        scanf("%d", &type);

        switch (type)
        {
        case 1:
            printf("Your voltage type is Home type\n");
            break;
        case 2:
            printf("Your voltage type is Home type\n");
            break;
        }
        break;

    case 3000:
        printf("Your Voltage is 3000\n");
        printf("Enter your voltage type 1 or 2\n");
        scanf("%d", &type);

        switch (type)
        {
        case 1:
            printf("Your voltage type is non-Home(Line) voltage type\n");
            break;
        case 2:
            printf("Your voltage type is non-Home(Line) voltage type\n");
            break;
        }
        break;
    default:
        printf("Your Voltage is doesn't match of any kind");
        break;
    }

    return 0;
}