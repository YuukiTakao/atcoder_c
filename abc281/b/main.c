#include <stdio.h>
#include <string.h>
int	main(void)
{
	char S[15];
	scanf("%s", S);

	int len = strlen(S);
	if (len != 8) {
		printf("No\n");
		return 0;
	}
	int ans = 1;
	for (int i = 0; S[i] != '\0'; i++) {
		if (i == 0 || i == 7) {
			if (S[i] < 'A' || 'Z' < S[i])
				ans = 0;
		} else if (1 <= i && i <= 6) {
			if (S[1] >= '1' && '0' <= S[i] && S[i] <= '9') {
			}
			else 
				ans = 0;
		} else 
			ans = 0;
		// printf("%d %c\n", i, S[i]);
	}
	if (ans == 1)
		printf("Yes\n");
	else
		printf("No\n");
	
	return (0);
}