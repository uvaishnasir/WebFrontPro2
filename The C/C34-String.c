#include <stdio.h>

void printstr(char str[])
{
    printf("%s",str);
}
 
void main()
{
    // char str[]= {'t','H','e','U','V','\0'};
    // char str[] = "tHe Uv";
    char str[25];
    printf("Enter the string\n");
    gets(str);
    printf("By using puts\n");
    puts(str);
    printf("By using printf\n");
    printf("%s\n",str);
    printf("By using custom function printstr\n");
    printstr(str);
}