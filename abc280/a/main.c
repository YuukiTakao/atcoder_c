#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int H, W;

	scanf("%d %d", &H, &W);

	char **S;
	S = calloc(H+1, sizeof(char *));

	int ans = 0;
	for (int i = 0; i < H; i++)
	{
		S[i] = calloc(W+1, sizeof(char));
		scanf("%s", S[i]);
		for (int j = 0; j < W; j++)
		{
			if (S[i][j] == '#')
				ans++;
		}
	}
	printf("%d\n", ans);

	return (0);
}