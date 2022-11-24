#include <stdio.h>

int	main(void)
{
	int N;

	scanf("%d", &N);
	int a[N+9];
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
	

	long long sum = 0;
	int right = 0;
	for (int left = 0; left < N; left++)
	{
		while (right < N - 1 && a[right] < a[right+1])
		{
			right++;
		}
		// printf("%d %d right-left+1=%d\n", left, right, right - left+1);
		sum += right - left + 1;
		if (left == right)
			right++;
	}
	printf("%lld\n", sum);
	
	
	return (0);
}