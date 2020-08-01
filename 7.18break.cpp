# include <stdio.h>
int mian()
{
	int i, j;

	for(i=1; i<4; ++i)
	{
		for(j=1; j<4; ++j)
			break;
		printf("timi\n");
	}
	return 0;
}