# include <stdio.h>

int main(void)
{
	int val;
	int sum=0;
	printf("请输入要判断的数：")；
	scanf("%d",&val);

	m = val;
	while (m)
	{
		sum = sum*10 + m%10;
		m /= 10;
	}
	if(sum==val)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}
