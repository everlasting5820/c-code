# include <stdio.h>

int main()
{
	int x;
	int n = 0;
	scanf("%d",&x);
	//x = 0;
	while (x > 0){
		n++;
		x /= 10;
		printf("x=%d,n=%d\n",x,n);
	}
	printf("%d\n",n);
	
	return 0;
 } 
