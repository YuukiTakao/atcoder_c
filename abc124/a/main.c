#include <stdio.h>

size_t	max_int(const size_t a, const size_t b)
{
	if (a <= b)
		return (b);
	else
		return (a);
}

int	main(void)
{
	int a, b;
	scanf("%d%d", &a, &b);
	// printf("%d %d\n", a, b);

	if (a == b) {
		printf("%d\n", a * 2);
		return 0;
	}

	int max = max_int(a, b);
	printf("%d\n", max + max-1);

	return (0);
}