#include <stdio.h>
#include <stdlib.h>

int	main(void) {
	int N;
	
	scanf("%d", &N);
	int no_tax = N / 1.08;

	if (no_tax * 1.08 == N) {
		printf("%d\n", no_tax);
		return 0;
	} else {
		for (int i = no_tax - 5; i < no_tax + 5; i++) {
			int tmp = i * 1.08;
			if (tmp == N) {
				printf("%d\n", i);
				return 0;
			}
		}
	}
	printf(":(\n");
	return (0);
}