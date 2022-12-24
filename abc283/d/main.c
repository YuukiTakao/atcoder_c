#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char S[400000];
	scanf("%s", S);
	// printf("%s\n", S);

	int offset = 96;
	int *alpha;
	alpha = calloc(27, sizeof(int));
	
	// int close = 0;
	for (int i = 0; S[i] != '\0'; i++) {
		if ('a' <= S[i] && S[i] <= 'z') {
			if (alpha[S[i] - 0 - offset] == 0) {
				alpha[S[i] - 0 - offset] = 1;
			} else if (alpha[S[i] - 0 - offset] == 1) {
				printf("No\n");
				return 0;
			}
		} else if (S[i] == ')') {
			alpha = calloc(27, sizeof(int));
		}
	}
	printf("Yes\n");
	
	return (0);
}