#include<stdio.h>

void main()
{
   begin:	for( int i=1 ; i<10 ; i++){
		if( i == 5)
		goto begin;
		else
		printf("%d ", i);
	}
}