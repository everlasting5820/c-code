# include <stdio.h>

int main(void)
{
	int a,b,c;
	int t;

	printf("please put on your number:(fill blank)");

	scanf("%d %d %d",&a , &b , &c);
	if(a<b)
	{
		t = a;
		a = b;
		b = t;

	}
	if(b<c)
	{
		t = b;
		b = c;
		c = t;
	
	}
	printf("%d,%d,%d\n", a,b,c);

	return 0;

}