#include <stdio.h>

int	main(void) {
	char S[50];

	scanf("%s", S);
	int i;
	for (i = 0; S[i] != '\0'; i++) {
	}
	if (S[i-1] == 'T')
		printf("YES\n");
	else
		printf("NO\n");
	return (0);
}