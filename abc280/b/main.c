#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int N;
	int *S;

	scanf("%d", &N);
	S = calloc(N+1, sizeof(int));
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &S[i]);
		if (i == 1)
			printf("%d", S[i]);
		else
			printf(" %d", S[i]-S[i-1]);
	}
	printf("\n");
	
	return (0);
}