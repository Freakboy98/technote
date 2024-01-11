#include <stdio.h>

#define max 10
/*void Quick_sort(int *arr,int left,int right)
{
	int pl = left;
	int pr = right;
	int pivot = arr[(pl+pr)/2)];
	int temp;
	do
	{
		while(arr[pl]<pivot)
		{
			pl++;
		}
		while(arr[pr]>pivot)
		{
			pr--;
		}
		if(pl<=pr)
		{
			temp = arr[pl];
			arr[pl] = arr[pr];
			arr[pr] = temp;
			pl++;
			pr--;
		}
	}while(pl<=pr);
	if(left <pr)
	{
		Quick_sort(arr,left,pr);
	}
	if(pl < right)
	{
		Quick_sort(arr,pl,right);
	}
	
}
*/
void Quicksort(int A[],int start, int end)
{
	int index;
	int i;
	if(start< end) //묶음의 갯수가 1개가 되면 멈춘다. 
	{
		printf("\n");
		index =	Partition(A , start,end);
		printf("index is %d\n",index);
		for(i=0;i<max;i++)
		{
			printf("%d ",A[i]);
		}
		printf("end is %d\n",end);
		printf("\n");
		Quicksort(A , start, index-1);	//재귀함수 
		Quicksort(A , index+1, end);	//재귀함수 
	}
	else
	{
		return ;
	}
}
int Partition(int A[], int start, int end)
{
	int pivot = A[end];
	int i;
	int index = start;
	int temp;
	for(i=start;i<end;i++)
	{
		if(A[i]<=pivot)
		{
			printf("\n swap!! %d %d", A[i],A[index]);
			temp = A[i];
			A[i] = A[index];
			A[index] = temp;
			index ++;
		}
	}
	temp = A[index];
	A[index] = A[end];
	A[end] = temp;
	printf("\n swap!!! %d %d\n", A[index],A[end]);
	return index;
}
int main(void)
{
	/*퀵소트는 피봇을 기준으로 조건을 검사한다.
	//따라서 피봇을 어떤 값으로 정하는냐에 따라 연산속도가 달라진다.
	 //범위, 기준, 비교, 스왑 이 중요 키워드 이다.
	 //재귀함수를 이용한다. 
	  //분할정복반복론 */
	int i;
	int A[max] = {40,30,100,60,80,70,90,10,20,50};
	printf("befor sorting");
	for(i=0;i<max;i++)
	{
		printf("%d ",A[i]);
		
	}
	printf("\n");
	Quicksort(A, 0, max-1);
	
	printf("after sorting");
	for(i=0;i<max;i++)
	{
		printf("%d ",A[i]);
		
	}
	
	return 0;
} 
