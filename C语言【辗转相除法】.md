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