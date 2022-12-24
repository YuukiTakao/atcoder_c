#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int N, R;
	scanf("%d %d", &N, &R);
	// printf("%d %d\n", N, R);

	
	if (N >= 10)
		printf("%d\n", R);
	else {
		int K = 100 * (10 - N);
		printf("%d\n", R+K);
	}
	

	return (0);
}