#include<stdio.h>
//tHe Uv. if else if statements
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("Your age is %d\n", age);
    if (age>=18)            
    {
        printf("you can vote!");
    }
    else if (age>=10)
    {
        printf("your age b/w 10 & 18 so you can vote for kids!");
    }
    else if (age>=5)
    {
        printf("your age b/w 5 & 10 so u can vote for babies!");
    }
    
    else
    {
        printf("you can't vote for anyone!");
    
    }

    return 0;
}
