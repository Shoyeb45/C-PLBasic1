#include<stdio.h>

void main()
{
	int a, b, c;
printf("Enter the three sides of triangle.:");
scanf("%d %d %d", &a, &b,&c);

if((a*a)+(b*b)==(c*c))
printf("Pythagorean Triplet.");

if((a*a)+(c*c)==(b*b))
printf("Pythagorean Triplet.");

if((c*c)+(b*b)==(a*a))
printf("Pythagorean Triplet.");


}