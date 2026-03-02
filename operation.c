#include<stdio.h>
float op(float a,float b, char ch)
	{ switch (ch){
		case '+':
			printf("Result:%f\n",a+b);
			break;

		case '-':
			printf("Result:%f\n",a-b);
			break;
		case '*':
			printf("Result:%f\n",a*b);
			break;	
		case '/':
			if(b==0)
				printf("Math Error");
			else
			printf("Result:%f\n",a/b);
			break;
		default:
		printf("Invalid");
	}}
