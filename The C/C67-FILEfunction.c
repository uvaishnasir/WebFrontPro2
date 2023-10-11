#include <stdio.h> //FILE function fgetc/fgets/fputc/fputs--01/08/2021

void main()
{
    //use of fgetc,fgets for READING.
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r+");
    char c = fgetc(ptr);
    printf("The first character I read was %c\n", c);
    char str[30];
    fgets(str, 16, ptr);
    printf("The remaining string is %s\n", str);

    //use of fputc, fputs for writing.
    // fputc('U',ptr);
    // fputs("vaish Nasir", ptr);  or //fputs(str,ptr);
    fclose(ptr);
}