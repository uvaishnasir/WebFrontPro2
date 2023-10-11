#include <stdio.h>   //28-07/2021
#include <stdlib.h>
#define UV
#define PI 3.14
#define key 25
void main()
{
    //ifdef
#ifdef UV
    printf("Today's date is %s\n", __DATE__);

#else
    printf("File name is %s\n", __FILE__);
#endif
    //if-elif-else
#if key > 25
    printf("Key defined as greater than 25\n");
#elif key < 25
    printf("Key defines as less than 25\n");
#else
    {
#if key < 24
        printf("Key defined as less than 24\n");
#elif key > 24
        printf("Key=25\n");
#else
        printf("out of range\n");
#endif
    }
#endif
    //ifndef
#ifndef PI
    printf("This line is %d\n", __LINE__);
    printf("ANSI Standard: %d\n", __STDC__);
#else
    printf("Time is %s\n", __TIME__);
#endif
}
