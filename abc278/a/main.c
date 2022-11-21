#include <stdio.h>

int	main(void)
{
	int N, K;

	scanf("%d %d", &N, &K);
	// printf("%d %d\n", N, K);

	int A[N+1];
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &A[i]);
		// printf("%d\n", A[i]);
	}

	for (int i = K + 1; i <= N; i++)
	{
		if (i > K + 1)
			printf(" ");
		printf("%d", A[i]);
	}
	if (K < N)
		printf(" ");
	for (int i = 1; i <= N && i <= K; i++)
	{
		if (i > 1)
			printf(" ");
		printf("0");
	}
	printf("\n");
	
	return (0);
}