#include <stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char add[15]; //15+4+4=23 bytes
};
struct student nish, uv, dv;
void main()
{
    nish.id= 17;
    uv.id= 18;
    dv.id= 19;
    nish.marks=741;
    uv.marks = 742;
    dv.marks= 743;
    strcpy(nish.add,"NAJIBABAD");
    strcpy(uv.add,"JALALABAD");
    strcpy(dv.add, "SAHANPUR");
    printf("These are the informations of three students:\n");
    printf("1-Nish:\nCollege ID = %d\nMarks obtain = %d\nAddress = %s\n", nish.id,nish.marks,nish.add);
    printf("2-UV:\nCollege ID = %d\nMarks obtain = %d\nAddress = %s\n", uv.id,uv.marks,uv.add);
    printf("3-DV:\nCollege ID = %d\nMarks obtain = %d\nAddress = %s\n", dv.id,dv.marks,dv.add);
}