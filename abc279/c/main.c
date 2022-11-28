#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int H, W;

	scanf("%d %d", &H, &W);
	char **sx;
	char **tx;

	sx = calloc(H+1, sizeof(char *));
	tx = calloc(H+1, sizeof(char *));

	for (int i = 0; i < H; i++)
	{
		sx[i] = calloc(W+1, sizeof(char));
		scanf("%s", sx[i]);
		// printf("%s\n", sx[i]);
	}
	for (int i = 0; i < H; i++)
	{
		tx[i] = calloc(W+1, sizeof(char));
		scanf("%s",tx[i]);
		// printf("%s\n", tx[i]);
	}

	int *dot_s, *dot_t;

	dot_s = calloc(H+1, sizeof(int));
	dot_t = calloc(H+1, sizeof(int));

	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			if (sx[i][j] == '.')
			{
				dot_s[i] += 1;
			}
			if (tx[i][j] == '.')
				dot_t[i] += 1;
		}
		// printf("s=%d t=%d\n", dot_s[i], dot_t[i]);
		if (dot_s[i] != dot_t[i])
		{
			printf("No\n");
			return (0);
		}
	}
	printf("Yes\n");
	
	



	return (0);
}