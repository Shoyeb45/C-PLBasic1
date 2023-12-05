//Replacing 1st element of array to 2nd and so on and transferring first element to 5th element.

#include<stdio.h>

void main(){
    int b[5]={1,2,3,4,-9};
    int temp = b[0];
 
    for(int i=0 ; i<=3 ; i++){
        b[i]=b[i+1];
    }
b[4]=temp;
    for(int i=0; i<5 ; i++){
        printf("%d ", b[i]);
    }
   
}