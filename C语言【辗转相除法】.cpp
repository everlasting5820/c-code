# include <stdio.h>
# include <math.h>

int main(void)
{
	int u = 32;
	int v = 26;
	while(v != 0)
	{
		int temp = u%v;
		u = v;
		v = temp;
	}
	printf("%d",u);
	return 0;
}
/*
   1.如果v等于0，计算结束，u就是最大公约数；
   2.如果v不等于0，那么计算u除以v的余数，让u等于v，而v等于那个余数
   3.回到第一步。
*/
