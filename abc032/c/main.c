#include <stdio.h>

int	main(void)
{
	int			N;
	long int	K;

	scanf("%d %ld", &N, &K);
	long int S[N+9];
	for (int i = 0; i < N; i++)
	{
		scanf("%ld", &S[i]);
		if (S[i] == 0)
		{
			printf("%d\n", N);
			return (0);
		}
	}

	if (K == 0)
	{
		printf("0\n");
		return (0);
	}

	int max = 0;
	int j = 0;
	long long mul = 1;
	for (int  i = 0; i < N; i++)
	{
		while (j < N && mul * S[j] <= K)
		{
			mul *= S[j];
			j++;
			// printf("i=%d j=%d j-i=%d\n",i,j,j-i);
		}
		if (max < j - i)
			max = j - i;
		if (i == j)
			j++;
		else
			mul /= S[i];
	}
	printf("%d\n", max);

	
	return (0);
}