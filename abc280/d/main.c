#include <stdio.h>

unsigned long long greatest_common_divisor(unsigned long long a, unsigned long long b)
{
	if (a < b)
	{
		unsigned long long tmp = a;
		a = b;
		b = tmp;
	}
	unsigned long long r = a % b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}

int	main(void)
{
	unsigned long long K;

	scanf("%lld", &K);
	// printf("%d\n", K);


	for (long long i = 1; i <= 2000000; i++) {
		K /= greatest_common_divisor(i, K);
		if (K == 1)
		{
			printf("%lld\n", i);
			return (0);
		}
		// printf("i=%d fact=%lld gcd=%lld lcd=%lld\n", i, f[i], greatest_common_divisor(f[i], K)  ,f[i] / greatest_common_divisor(f[i], K) * K);
	}
	printf("%lld\n", K);

	return (0);
}