#include<stdio.h>
#define _CRT_SECURE_NO_WARNIGS
void swap(int *p,int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	
}
int main()
{
	int a = 1, b=4;
	printf("Befor : a = %d b = %d\n",a,b);
	swap(&a,&b);
	printf("After : a = %d b = %d\n",a,b); 
	
	return 0;
	
}
