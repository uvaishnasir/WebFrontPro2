#include <stdio.h>
//palindrome --21/05/2021
int main()
{
    int num, rev = 0, temp;
    printf("Enter the number\n");
    scanf("%d", &num);
    temp = num;

    while (num != 0)
    {
        rev = (rev * 10) + num % 10;
        num = num / 10;
    }
    if (temp == rev)
        printf("%d is a Palindrome number", temp);
    else
        printf("It's not Palindrome");
    return 0;
}
