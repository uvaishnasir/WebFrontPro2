#include <stdio.h> //tHeUV-11/07/2021
#include <string.h>

struct TVA //here TVA is not TIME VARIANCE AUTHORITY it's stands for TRAVEL AGENCY.
{
    char name[15];
    char DL_ID[15];
    char route[15];
    int duration;

} d[3];

void printdetails()
{
    for (int i = 0; i < 3; i++)
    {
        printf("Driver number - %d\n",i+1);
        printf("Name - %s\n",d[i].name);
        printf("DL Id - %s\n",d[i].DL_ID);
        printf("Route - %s\n",d[i].route);
        printf("Travel duration - %d kms\n",d[i].duration);
        printf("\n");
    }
}

void main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the name of driver %d without space:\n", i + 1);
        scanf("%s", d[i].name);
        printf("Enter the Driving License Id of driver %d:\n", i + 1);
        scanf("%s", d[i].DL_ID);
        printf("Enter the route of driver %d:\n", i + 1);
        scanf("%s", d[i].route);
        printf("Enter the travel duration in kms of driver %d:\n", i + 1);
        scanf("%d", &d[i].duration);
    }
    printf("\n");
    printf("*****Printing the details of 3 drivers:*****\n");
    printdetails();
}