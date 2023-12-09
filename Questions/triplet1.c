#include<stdio.h>
#include<math.h>

void main()
{
	double a, b, c;
printf("Enter the three sides of triangle.:");
scanf("%d %d %d", &a, &b,&c);

if(pow(a,2)+pow(b,2)==pow(c,2))
printf("Pythagorean Triplet.");

if(pow(a,2)+pow(c,2)==pow(b,2))
printf("Pythagorean Triplet.");

if(pow(c,2)+pow(b,2)==pow(a,2))
printf("Pythagorean Triplet.");


}