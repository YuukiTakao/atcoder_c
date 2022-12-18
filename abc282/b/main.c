#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
	// printf("%d %d\n", N, M);

	char **S;
	S = calloc(N+1, sizeof(char *));
	for (int i = 0; i < N; i++) {
		S[i] = calloc(M+5, sizeof(char));
		scanf("%s", S[i]);
		// printf("S=[%i]=%s\n",i, S[i]);
	}
	
	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			int ac = 1;
			for (int k = 0; k < M; k++) {
				// printf("i=%d j=%d S[i][k]=%c S[j][k]=%c\n", i, j, S[i][k], S[j][k]);
				if (S[i][k] != 'o' && S[j][k] != 'o') {
					ac = 0;
					break;
				}
			}
			if (ac == 1)
				ans++;
		}
		
	}
	printf("%d\n", ans);
	// unsigned char i = 0xff;
	
	return (0);
}
