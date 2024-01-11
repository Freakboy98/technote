#include<stdio.h>
int main()
{
	char arr[6] = {"hello"};
	
	char* ptr;
	
	ptr = &arr[0];
	printf("%c\n",*ptr); 
	printf("%c\n",*(ptr+1)); //연산자의 순서 때문에 ()로 연산순서를 우선으로 만든다. 
	printf("%c\n",*ptr+2); //*연산 후 + 2 연산실해됨. 결과는 j가 나옴 
	return 0;
}
