#include<stdio.h>

void main()
{
    int length , breadth;
    printf("Enter a length and breadth:");
    scanf("%d %d",&length,&breadth);

int Perimeter = 2*(length+breadth);
int Area = length*breadth;

if(Perimeter>Area)
printf("Perimeter is greater.");
else
printf("Area is greater.");

}