#include <stdio.h>
#include<string.h>
union student
{
    int id;
    int marks;
    char add[15];  //15 bytes
};
union student nish, uv, dv;
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
    printf("UV's College ID = %d\n",uv.id);
    printf("Uv got Marks = %d\n",uv.marks);
    printf("Uv's Address = %s\n",uv.add);
}