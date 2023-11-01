#include<stdio.h>

void main()
{
    int a = 8, b = 3,c=9;

    printf("a is %d ,b is %d , c is %d:\n",a,b,c);

    b = 10; // Reassigning values, this will overwrite the value

    printf("a is %d ,b is %d , c is %d:\n",a,b,c);

    float g =2.3;
    double r = 11.23;
//Note that I've changed %d to %f ,depending upon data types

    printf("g is %f ,r is %f ",g,r);
}