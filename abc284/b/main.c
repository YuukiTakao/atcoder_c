#include <stdio.h>
#include <stdlib.h>

int	main(void) {
	int T;
	scanf("%d", &T);
	// printf("%d\n", T);

	int N;
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		// printf("%d\n", N);

		int count = 0;
		for (int i = 0; i < N; i++) {
			int a;
			scanf("%d", &a);

			if (a % 2 == 1) {
				// printf("a=%d\n", a);
				count++;
			}
		}
		printf("%d\n", count);
	}
	
	return (0);
}