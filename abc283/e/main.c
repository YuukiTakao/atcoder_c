#include <stdio.h>
#include <stdlib.h>


int	main(void)
{
	int H, W;
	scanf("%d %d", &H, &W);
	
	printf("%d %d\n", H, W);

	int **map;
	map = calloc(H+1, sizeof(int *));
	for (int i = 1; i <= H; i++) {
		map[i] = calloc(W+1, sizeof(int));
		for (int j = 1; j <= W; j++) {
			scanf("%d", &map[i][i]);
			printf("%d ", map[i][i]);
		}
		printf("\n");
	}

	return (0);
}