#include <stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a=*b;
	*b=temp;
}

int main(void)
{
	//�����Ʈ
	int i,j,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++) 
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n-1;i++) //���� ���� = 2���� ���� ��, ������ ���� �̱⶧���� n-1 
						//) ���� : 6���� ��� => 12 23 34 45 56���� ������ 3���� == i<6-1 == i=0,1,2,3,4 
	{
		for(j=0;j<n-i-1;j++) //������ ������ �ٲٴ� �κ�
							// �˻������ n-i-1�� ������ �� �ڿ� ���� Ȯ���Ǳ� �����̴�. 
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	} 
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
