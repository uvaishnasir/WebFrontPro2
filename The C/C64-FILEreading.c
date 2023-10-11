#include <stdio.h> //30/07/2021--UV

void main()
{
    //reading a file in two ways.
    FILE *ptr = NULL;
    char file[50], t;
    ptr = fopen("64text.txt", "r"); //file will open in read mode if doesn't exist then created new one.
    // fscanf(ptr,"%s",file);         //read a word from file.
    // printf("\t***This is the first word of the file:- %s\n",file);
    printf("\t***This is the content of the file:\n");
    while (1)
    {
        t = fgetc(ptr);
        if (t == EOF)
            break;
        printf("%c", t);
    }
    fclose(ptr);
}