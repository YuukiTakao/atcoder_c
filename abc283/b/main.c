#include <stdio.h>
#include <stdlib.h>

int	main(void){
	int N;
	scanf("%d", &N);
	
	int *A;
	A = calloc(N+1, sizeof(int));
	for (int i = 1; i <= N; i++) {
		scanf("%d", &A[i]);
		// printf("A[%d]=%d\n", i, A[i]);
	}
	int Q;
	scanf("%d", &Q);
	// printf("Q=%d\n", Q);
	for (int i = 1; i <= Q; i++) {
		int q;
		scanf("%d", &q);
		if (q == 1) {
			int k, x;
			scanf("%d %d", &k, &x);
			A[k] = x;
			// printf("q==1, k=%d x=%d\n", k, x);
		} else if (q == 2) {
			int k;
			scanf("%d", &k);
			// printf("q==2, k=%d\n", k);
			printf("%d\n", A[k]);
		}
	}
	return (0);
}
