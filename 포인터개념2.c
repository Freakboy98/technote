#include<stdio.h>
int main()
{
	char arr[6] = {"hello"};
	
	char* ptr;
	
	ptr = &arr[0];
	printf("%c\n",*ptr); 
	printf("%c\n",*(ptr+1)); //�������� ���� ������ ()�� ��������� �켱���� �����. 
	printf("%c\n",*ptr+2); //*���� �� + 2 ������ص�. ����� j�� ���� 
	return 0;
}
