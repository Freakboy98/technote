#include <stdio.h>
int main()
{
	int a[9]={7,6,5,3,2,8,1,9,4};
	int i, j, k, temp;
	for (i=0;i<=8;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
		//두 저장공간의 값 교환
	for(i=0;i<=7;i++)
	{
		for(j=i+1;j<=8;j++)
		{
			if (a[i] > a[j])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;		
			}
		}
		for(k=0;k<=8;k++)
		{
			printf("%d ", a[k]);
		}
		printf("\n");
	}

		
	return 0;
}
