#include<stdio.h>
#include "operation.h"
int main()
{
	float x,y;
	char ch;
	printf("Enter x,y & symbol(+-*/):");
	scanf("%f %f %c",&x,&y,&ch);
	op(x,y,ch);
	return 0;

}
