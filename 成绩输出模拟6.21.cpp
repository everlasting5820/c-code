# include <stdio.h>

int main(void)
{
	float score;

	printf("put on your score");
	scanf("%f" , &score);

	if (score>100)
		printf("Do you dream?\n");
	else if (score>=60 && score<=100)
		printf("just so so\n");
	else if (score>=0 && score<60)
		printf("noly that? you'are demon\n");
	else
		printf("you so litter\n");

	return 0;
}