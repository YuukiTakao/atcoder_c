#include <stdio.h>

int	main(void)
{
	int A, B;
	scanf("%d%d", &A, &B);

	if (A <= 5) {
		printf("%d\n", 0);
		return 0;
	} else if (6 <= A && A <= 12) {
		printf("%d\n", B/2);
	} else {
		printf("%d\n", B);
	}
	
	return (0);
}