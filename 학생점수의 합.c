#include <stdio.h>
int main(void)
{
	int score[5][2];
	int total[2] = { 0, }; // ������ �迭���� index 0 �� 1�� ��� 0�� �־��شٴ� �ǹ��̴�.
							// { 0 , };�� �� ������ �ϳ��� ���� ���� ���
							// ��ǥ�� �������� �־���� ���Ѵ�.
	int i;
	for(i=0;i<5;i++)
	{
		//��� => ��� �л��� ������
		printf("%d��° �л��� ����, ���� ����:",i+1);
		scanf("%d %d",&score[i][0],&score[i][1]);
	}
	for(i=0;i<5;i++)
	{
		total[0] += score[i][0];
		total[1] += score[i][1];
		 
	}
	printf("������ ������ %d�̰� ������ ������ %d �Դϴ�.\n",total[0],total[1]);
	return 0;
}
