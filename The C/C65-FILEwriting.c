#include <stdio.h> //30/07/2021--UV

void main()
{
    //writing in a file in two ways.
    FILE *fp = NULL;
    char c, string[50];
    printf("Enter the file content:\n");
    gets(string);
    fp = fopen("65text.txt", "w"); //file will open in write mode if doesn't exist then created new one.
    fprintf(fp, "%s", string);     //write the content of string into the file which is associated by pinter fp.
    
    printf("Enter the content of file char by char & press # to terminate\n");
    while (1)
    {
        scanf("%c", &c);
        if (c == '#')
            break;
        fputc(c, fp);
    }
    fclose(fp);
}