#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char N[1000009];
	scanf("%s", N);
	// printf("%s\n", N);

	int i = 0;
	int ans = 0;
	while (N[i] != '\0') {
		if (N[i] == '0' && N[i+1] == '0') 
			i += 2;
		else 
			i++;
		ans++;
	}
	

	// printf("i=%d count=%d\n", i, count);
	printf("%d\n", ans);
	
	return (0);
}