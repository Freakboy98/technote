#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void swap(double *pa,double *pb);
void line_up(double *maxp,double *midp, double *minp);


 
int main(void)
{
	double max,mid,min;
	
	printf("3���� �� �Է� : ");
	scanf("%lf%lf%lf",&max,&mid,&min);
	line_up(&max,&mid,&min);
	printf("���ĵ� �� : %.1lf, %.1lf, %.1lf\n",max, mid, min);
	return 0;
 } 
 void swap(double *pa,double *pb)
{
	double temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	
}
void line_up(double *maxp,double *midp, double *minp)
{
	if(*maxp > *midp)
	{
		if(*minp >= *maxp)
		{
			swap(maxp,minp);
			swap(midp,minp);
			
		}
		else
		{
			//mid vs min
			if(*minp > *midp)
			{
				swap(midp,minp);
			}	
		}
		
	}
	else
	{
		//midp > maxp
		//minp�� ����
		if(*minp > *midp)
		{
			swap(maxp,minp);	
		}
		//midp > maxp vs minp
		else
		{
			//mid maxp minp
			if(*maxp > *minp)
			{
				swap(maxp,midp);
			}
			//mid min max��
			else
			{
				swap(maxp,midp);
				swap(midp,minp);	
			} 
		}
	}
}

