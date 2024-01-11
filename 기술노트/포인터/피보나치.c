#include <stdio.h>
int pibonachi(int a)
{
	if(a==0)
	{
		return 0;
	}
	else if(a == 1) 
	{
		return 1;	
	}
	else
	{
		return pibonachi(a-1) + pibonachi(a-2);
	} 
		
	
	
}

int main()
{
	int a,i;
	printf("몇번 반복할까요? :");
	scanf("%d",&a);
	for (i=1;i<a+1;i++)
	{
		
		printf("%d ",pibonachi(i));
	}
	
	return 0;
}	
