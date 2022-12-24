#include <stdio.h>
#include <stdlib.h>

#define Mod 1000000007
typedef	long long ll;
ll mod_pow(int a, int exp, int M) {
	if (exp == 0)
		return 1;
	ll p = a, ans = 1;
	for (int i = 0; i < 30; i++) {
		int div = 1 << i;
		if ((exp / div) % 2 == 1)
			ans = (ans * p) % M;
		p = (p * p) % M;
	}
	return ans;
}

int	main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);
	
	printf("%lld\n", mod_pow(A, B, Mod));
	return (0);
}