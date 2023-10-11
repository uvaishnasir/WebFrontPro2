#include <stdio.h> //tHeUv--29/07/2021

int palindrome(int num)
{
    int reverse = 0, temp;
    temp = num;
    while (num != 0)
    {
        reverse = (reverse * 10) + num % 10;
        num = num / 10;
    }
    if (temp==reverse) //here temporary num is compared to reversed num.
    {
        return 1;
    }
    else
        return 0;
}

void main()
{
    int number;
    printf("Enter the number to check wheather it is a palindrome or not:\n");
    scanf("%d", &number);
    if (palindrome(number) == 1)
    {
        printf("A palindrome number.\n");
    }
    else
    {

        printf("Sorry! It's not a palindrome number.\n");
    }
}