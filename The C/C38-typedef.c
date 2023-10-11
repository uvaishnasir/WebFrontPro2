#include <stdio.h> //UV-02/07/2021
void main()
{
    // typedef <previous name> <alias name>;
    typedef float ft;
    ft a = 22, b;
    typedef unsigned char uc;
    uc l1, l2, l3;
    printf("Value of a is %.2f\n", a/7);
    typedef struct student
    {
        char name[10];
        char add[10];
        int id;
        int marks;
    } std;
    std s1;
    printf("Enter the record of the student: NAME, ADDRESS, ID, Marks\n");
    scanf("%s%s%d%d",s1.name,s1.add,&s1.id,&s1.marks);
    printf("NAME is %s\nAddress is %s\nID is %d\nMarks is %d\n",s1.name,s1.add,s1.id,s1.marks);

    typedef int* intptr;
    intptr p, q;
    int r=7;
    p=&r, q=&r;
    printf("value at address p is %d\n", *p);
    printf("address p is %d\n", p);
    printf("value at address q is %d\n", *q);
    printf("address q is %p\n", q);
    printf("value of r is %d\n", r);
}