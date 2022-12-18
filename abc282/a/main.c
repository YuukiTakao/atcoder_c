#include <stdio.h>

int	main(void)
{
	int K;
	scanf("%d", &K);
	// printf("%d\n", K);

	char alpha = 'A';

	for (int i = 1; i <= K; i++)
	{
		printf("%c", alpha++);
	}
	printf("\n");
	
	return (0);
}