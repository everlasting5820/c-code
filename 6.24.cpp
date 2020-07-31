# include <stdio.h>
int main(void)
{
	int i;
	int sum = 0;
	int sum_= 0;
	int cnt = 0;
	int cnt_= 0;
	float avg,avg_;
	for(i=1; i<=100; i+=1)
	{
		if(i%2==0)
		{
			sum = sum + i;
			++cnt;
		}
		else if(i%2==1)
		{
			sum_=sum_+ i;
			++cnt_;
		}

	}
	avg = sum/cnt;
	avg_= sum_/cnt_;
		//sum = sum +i;
	printf("i = %d\n",i);
	printf("sum = %d\n",sum);
	printf("sum_= %d\n",sum_);
	printf("cnt = %d\n",cnt);
	printf("cnt_ = %d\n",cnt_);
	printf("avg = %f\n",avg);
	printf("avg_= %f\n",avg_);
	
	return 0;
}