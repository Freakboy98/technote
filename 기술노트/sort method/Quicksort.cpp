#include <stdio.h>
#define max 10


// Function prototype
int partition(int A[], int start, int end);

void quick(int A[],int start, int end)
{
	int index;
	if(start<end)
	{
		index = partition(A, start, end); //pivot위치를 특정지어라.
		//그리고 pivot을ㄹ 기준으로 왼쪽 
		quick(A,start,index-1);
		//pivot을 기준으로 오른쪽
		quick(A,index+1,end); 
	}
	else
	{
		return ;
	}
}
int partition(int A[],int start,int end)
{
	int pivot = A[end];
	int temp;
	int i;
	int index = start;
	for(i=start;i<end;i++)
	{
		if(A[i]<=pivot)
		{
			temp = A[i];
			A[i] = A[index];
			A[index] = temp;
			index++;	
		}
	}
	temp = A[index];
	A[index] = A[end];
	A[end] = temp;
	return index;
}
int main(void)
{
	int A[max] = {3,2,1,5,4,6,9,8,10,7};
	int i;
	printf("before sorting\n");
	for(i=0;i<max;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	quick(A,0,max-1);
	printf("after sorting\n");
	for(i=0;i<max;i++)
	{
		printf("%d ",A[i]);
	}
	return 0;
} 
