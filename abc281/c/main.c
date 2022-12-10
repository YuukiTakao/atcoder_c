#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int N;
	long long T;
	scanf("%d %lld", &N, &T);
	// printf("%d %lld\n", N, T);

	int *playlist;
	playlist = calloc(N+1, sizeof(int));

	long long psum = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &playlist[i]);
		psum += playlist[i];
	}
	long long sum = 0;
	long long remain = T % psum;
	int i = 0;
	while (sum + playlist[i] < remain) {
		sum += playlist[i++];
	}
	printf("%d %lld\n", i+1, remain-sum);
	
	return (0);
}