# include <stdio.h>

void jb(int i, int j)
{
	if(i>j)
		printf("%d\n",i);
	else
		printf("%d\n",j);
}

int main(void)
{
	int a, b, c, d, e, f;
	
	a = 1; b = 2; c = 3, d = 9, e = -5, f = 100;
	jb(a, b);
	jb(c, d);
	jb(e, f);
	return 0;
}
