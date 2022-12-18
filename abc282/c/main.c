#include <stdio.h>

int	main(void)
{
	int N;

	scanf("%d", &N);
	char S[N];
	scanf("%s", S);
	// printf("N=%d S=%s\n", N, S);

	int is_convert = 1;
	for (int i = 0; i < N; i++) {
		if (S[i] == '"' && is_convert == 1)
			is_convert = 0;
		else if (S[i] == '"' && is_convert == 0)
			is_convert = 1;

		if (S[i] == ',' && is_convert == 1)
			S[i] = '.';
	}
	printf("%s\n", S);
	
	
	return (0);
}