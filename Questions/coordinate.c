#include<stdio.h>

int main(){
    int x,y;
    printf("Enter x and y:");
    scanf("%d %d",&x, &y);
int Quadrant;
    if(x>=0){
        if(y>0)
        printf("(%d,%d) is on Quadrant 1.",x,y);
        else if (y<0)
        {
        printf("(%d,%d) is on Quadrant 4.",x,y);
        }
        else
        printf("(%d,%d) is on origin.",x,y);        
    }else{
        if(y>0)
        printf("(%d,%d) is on Quadrant 3.",x,y);
        else if (y<0)
        {
        printf("(%d,%d) is on Quadrant 2.",x,y);
        }else
        printf("(%d,%d) is on origin.",x,y);
        
    }
    return 0;
}