#include <stdio.h>

int	main(void)
{
	char s[101];

	scanf("%s", s);
	// printf("%s\n", s);

	int	i;
	
	i = 0;
	int ans = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 'v')
			ans += 1;
		if (s[i] == 'w')
			ans += 2;
		i++;
	}
	printf("%d\n", ans);
	return (0);
}