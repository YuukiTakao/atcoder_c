#include <stdio.h>

int	main(void)
{
	int n, x;
	int	p[101];

	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &p[i]);
		if (p[i] == x)
			printf("%d\n", i + 1);
	}
	
	return (0);
}