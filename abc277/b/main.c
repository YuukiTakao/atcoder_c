#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(void)
{
	int		n;
	int		ans;
	char	**si;
	
	scanf("%d", &n);

	si = (char **)calloc(52+1, sizeof(char *));
	// printf("n=%d\n", n);
	ans = 1;
	for (int i = 0; i < n; i++)
	{
		si[i] = (char *)calloc(2+1, sizeof(char));
		scanf("%s", si[i]);
		char S[3];
		strcpy(S, si[i]);
		// printf("S=%s\n", S);
		if (S[0] != 'H' && S[0] != 'D' && S[0] != 'C'&& S[0] != 'S')
		{
			// printf("no 1\n");
			ans = 0;
			break;
		}
		if (S[1] != 'A' && S[1] != '2' && S[1] != '3' && S[1] != '4' && S[1] != '5'
			&& S[1] != '6'&& S[1] != '7'&& S[1] != '8' && S[1] != '9' && S[1] != 'T'
			&& S[1] != 'J' && S[1] != 'Q' && S[1] != 'K'
		) {
			// printf("no 2\n");
			ans = 0;
			break;
		}
		for (int j = 0; j < i; j++)
		{
			// printf("i=%d j=%d si[j]=%s S=%s\n", i, j, si[j], S);
			if (strncmp(si[j] , S, 2) == 0)
			{
				// printf("no 3\n");
				ans = 0;
				break;
			}
		}
	}
	if (ans == 1)
		printf("Yes\n");
	else
		printf("No\n");
	return (0);
}