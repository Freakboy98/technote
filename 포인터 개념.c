#include<stdio.h>
int swap(int* a, int* b) //a�� b�� ���� �ٲٴ� �Լ��̴�. 
{
	/*
	int temp;
	temp = a;
	a=b;
	b=temp;
	*/ //swap�� ���� a�� b ��  main ���� a�� b��� �Ͱ� �ٸ���. 
		//�̸� �ذ��ϱ� ���ؼ� ���� �ƴ϶� �ּҷ� �����ؾ� �Ѵ�.
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
