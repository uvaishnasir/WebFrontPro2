#include <stdio.h> //01/08/2021-UV   //automated bill generator.
#include <string.h>
#include <stdlib.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultstring;
    int i, count = 0;
    int oldWrordlength = strlen(oldWord);
    int newWrordlength = strlen(newWord);
    //count the no of times oldword occurs in the string.
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            i = i + oldWrordlength - 1; //jump over this word.
        }
    }
    //Here we got i=size of string & count=no of times oldword occurs.
    //Now making a new resultimg string to fit in the replaced words.
    resultstring = (char *)malloc(i + count * (newWrordlength - oldWrordlength) + 1);
    i = 0; //for using in result string.
    while (*str)
    {
        //compare the substring with result.
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultstring[i], newWord);
            i += newWrordlength;
            str += oldWrordlength;
        }
        else
        {
            resultstring[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultstring[i] = '\0';
    return resultstring;
}

void main()
{
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    char string[200];
    fp1 = fopen("Bill.txt", "r");
    fp2 = fopen("Billgenrated.txt", "w");
    fgets(string, 200, fp1);
    printf("The sample bill was:\n%s\n", string);
    //calling replaceword function...
    char *newstr = string;
    newstr = replaceWord(string, "{{name}}", "MR. KHAN");
    newstr = replaceWord(newstr, "{{item}}", "Shoes");
    newstr = replaceWord(newstr, "{{outlet}}", "Adidas Outlet");
    printf("The actual Bill generated is:\n%s\n", newstr);
    fprintf(fp2, "%s", newstr);
    fclose(fp1);
    fclose(fp1);
}