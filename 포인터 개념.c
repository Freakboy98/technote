#include<stdio.h>
int swap(int* a, int* b) //a와 b의 값을 바꾸는 함수이다. 
{
	/*
	int temp;
	temp = a;
	a=b;
	b=temp;
	*/ //swap의 변수 a와 b 는  main 에서 a와 b라는 것과 다르다. 
		//이를 해결하기 위해서 값이 아니라 주소로 접근해야 한다.
	int temp;
	temp = *a;
	*a=*b;
	*b=temp;
	return 0;
	
}

int main()
{
	int a = 5;
	int b = 10;
	printf("a = %d\nb = %d\n",a,b);
	swap(&a,&b);
	printf("swap result\na = %d\nb = %d",a,b);
	return 0;
}
