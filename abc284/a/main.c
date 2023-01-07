#include <stdio.h>
#include <stdlib.h>

int	main(void) {
	int N;
	scanf("%d", &N);
	// printf("%d\n", N);

	char **S;
	S = calloc(N+5, sizeof(char *));
	for (int i = 0; i < N; i++) {
		S[i] = calloc(15, sizeof(char));
		scanf("%s", S[i]);
		// printf("%s\n", S[i]);
	}
	
	for (int i = N - 1; i >= 0; i--) {
		printf("%s\n", S[i]);
	}
	return (0);
}