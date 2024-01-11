#include <stdio.h>
int main(void)
{
	int score[5][2];
	int total[2] = { 0, }; // 일차원 배열에서 index 0 과 1에 모두 0을 넣어준다는 의미이다.
							// { 0 , };을 한 이유는 하나의 값만 넣을 경우
							// 쉼표를 마지막에 넣어줘야 한한다.
	int i;
	for(i=0;i<5;i++)
	{
		//출력 => 몇번 학생의 점수는
		printf("%d번째 학생의 수학, 영어 점수:",i+1);
		scanf("%d %d",&score[i][0],&score[i][1]);
	}
	for(i=0;i<5;i++)
	{
		total[0] += score[i][0];
		total[1] += score[i][1];
		 
	}
	printf("수학의 총합은 %d이고 영어의 총합은 %d 입니다.\n",total[0],total[1]);
	return 0;
}
