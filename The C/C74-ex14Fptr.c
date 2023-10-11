#include <stdio.h> //02/08/2021--UV
#include <stdlib.h>
#include <math.h>

float Edistance(int x1, int x2, int y1, int y2)
{
    int d = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
    return sqrt(d);
}
float AreaOfCircle(int x1, int x2, int y1, int y2, float (*fptr)(int, int, int, int))
{
    return M_PI * ((*fptr)(x1, x2, y1, y2)) * ((*fptr)(x1, x2, y1, y2));
}

void main()
{
    int x1, x2, y1, y2;
    printf("Enter the values of x1,x2 & y1,y2 respectively\n");
    scanf("%d%d%d%d", &x1, &x2, &y1, &y2);
    float (*fptr)(int, int, int, int);
    fptr = Edistance;
    printf("The Distance between these points is %.4f\n", Edistance(x1, x2, y1, y2));
    printf("The area of the circle(radius=distance) is %.4f\n", AreaOfCircle(x1, x2, y1, y2, fptr));
}