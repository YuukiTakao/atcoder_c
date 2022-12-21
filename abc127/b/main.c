#include <stdio.h>

int	main(void)
{
	int r, D, x;
	scanf("%d %d %d", &r, &D, &x);
	// printf("%d %d %d\n", r, D, x);

	int Xi[11];
	Xi[0] = 0;
	for (int i = 1; i <= 10; i++) {
		if (i == 1)
			Xi[i] = r * x - D;
		else
			Xi[i] = r * Xi[i-1] - D;
		printf("%d\n", Xi[i]);
	}
	return (0);
}