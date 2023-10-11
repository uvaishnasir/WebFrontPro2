#include <stdio.h>
#include <string.h>
void main()
{
    char s1[]= "THE";
    char s2[]= " UV";
    char s3[25];
    // printf("Concatenate of strings S1,S2 is %s\n",strcat(s1,s2));
    // puts(s1);
    // printf("Now length of the string S1 is %d\n",strlen(s1));
    // printf("The reverse of the string S1 is %s\n",strrev(s1));
    // printf("After copy the string S2 into S3 is %s\n",strcpy(s3,s2));
    // printf("After comparing the string S2 & S3 returned %d\n",strcmp(s2,s3));
    char s4[10];
    char s5[10];
    char str[] = " is a friend of ";
    printf("Enter two name:\n");
    gets(s4);
    gets(s5);
    strcat(s4,str);
    strcat(s4,s5);
    puts(s4);
    
}