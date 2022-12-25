#include <stdio.h>
#include <stdlib.h>

int	cmp_desc(const void *n1, const void *n2) {
	if (*(int *)n1 < *(int *)n2)
		return 1;
	else if (*(int *)n1 > *(int *)n2)
		return -1;
	else
		return 0;
}

int	main(void) {
	int N, M;

	scanf("%d %d", &N, &M);
	// printf("%d %d\n", N, M);

	int *A;
	A = calloc(N+1, sizeof(int));
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	qsort(A, N, sizeof(int), cmp_desc);
	int sum = 0;
	for (int i = 0; i < N; i++) {
		// printf("A[%d]=%d\n", i, A[i]);
		sum += A[i];
	}

	double per = 1.0 / (4.0 * M);
	double foot_cut = sum * per;
	// printf("per=%f\n", per);
	// printf("foot_cut=%f\n", foot_cut);
	
	int target = A[M - 1];

	if (target >= foot_cut)
		printf("Yes\n");
	else
		printf("No\n");
	
	return (0);
}