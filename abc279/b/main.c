#include <stdio.h>
#include <string.h>

int	main(void)
{
	char S[101], T[101];
	char *p;

	scanf("%s %s", S, T);
	// printf("%s\n", S);
	// printf("%s\n", T);

	p = strstr(S, T);
	if (p == NULL)
		printf("No\n");
	else
		printf("Yes\n");

	return (0);
}