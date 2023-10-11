#include <stdio.h>   //theUV-10/07/2021--Parsing the string.
#include <string.h>
void parser(char *string)
{
    int n = 0, collect = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            n = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            n = 0;
            continue;
        }
        if (n == 0)
        {
            string[collect] = string[i];
            collect++;
        }
    }
    string[collect] = '\0';
    //remove the spaces in string from the beginning.
    while (string[0] == ' ')
    {
        //shift the string to the start
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    //remove the spaces in string from the end.
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

void main()
{
    char string[] = "     </removable content/>    This is the original content     </removable content/>   ";
    printf("Before parsing the string is:\n~~%s~~\n", string);
    parser(string);
    printf("After parsing the string is:\n~~%s~~", string);
}