#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*base_to_n(int a, int n) {
	char *buf;
	char *ss;
	
	buf = calloc(1024, sizeof(char));
	ss = calloc(1024, sizeof(char));
	while (a > 0) {
		int remain = a % n;
		sprintf(buf, "%d%s", remain, ss);
		strcpy(ss, buf);
		a /= n;
	}
	return ss;
}

int	main(void) {
	int N, M;
	scanf("%d %d", &N, &M);

	printf("%lu\n", strlen(base_to_n(N, M)));
	return (0);
}