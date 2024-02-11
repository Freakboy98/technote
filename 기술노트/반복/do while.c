int main(void)
{
	int a,b;
	printf("a : ");
	scanf("%d",&a);
	do
	{
		printf("b : ");
		scanf("%d",&b);
	}while(a>b);
	printf("result : %d",b-a);
	return 0;
}
