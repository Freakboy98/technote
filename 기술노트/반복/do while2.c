int main(void)
{
	int a;
	do
	{
		printf("00:");
		scanf("%d",&a);
	}while(a < 10 || a>99); // ||은 논리연산자로써, nor을 의미한다. 
							//따라서 a에는 11부터 98사이의 수가 오면 do while 문을 나가게 된다.
							//&& = 논리곱 / 둘다 참일때만 1 나머지는 0
							// ||= 논리합 / 둘 중 하나라도 참이면 1, 둘다 거짓이면 0
							 
	 
	return 0;
}
