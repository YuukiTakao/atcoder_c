#include <stdio.h>

int	main(void)
{
	char S[500009], T[500009];

	scanf("%s %s", S, T);
	
	int ans = 1;
	for (int i = 0; T[i] != '\0'; i++)
	{
		if (S[i] == T[i])
			ans++;
		else
			break;
	}
	printf("%d\n", ans);
	return (0);
}