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
	//버블소트
	int i,j,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++) 
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n-1;i++) //쌍의 갯수 = 2개씩 묶을 때, 묶음의 갯수 이기때문에 n-1 
						//) 예시 : 6개의 사과 => 12 23 34 45 56으로 묶으면 3묶음 == i<6-1 == i=0,1,2,3,4 
	{
		for(j=0;j<n-i-1;j++) //실제로 순서를 바꾸는 부분
							// 검사범위가 n-i-1인 이유는 맨 뒤에 값이 확정되기 때문이다. 
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
