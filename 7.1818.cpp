# include <stdio.h>

int main()
{
	int val;
	printf("please input you want go plase: ");
	scanf("%d", &val);

	switch (val)
	{
	case 1:
		printf("1 plase\n");
		break;
	case 2:
		printf("2 plase\n");
		break;
	case 3:
		printf("3 plase\n");
		break;
	default:
		printf("zreo\n");
		break;
	}

	return 0;
}