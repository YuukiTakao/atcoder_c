#include <stdio.h>
#include <math.h>

int	main(void)
{
	long long A, B, tmp;

	scanf("%lld %lld", &A, &B);
	
	double min = A;

	tmp = B;
	B = 0;
	for (int  i = 1; i <= 15; i++)
	{
		double h = A / sqrt(i);
		// printf("i=%d sqrt(i+1)=%f A=%lld B=%lld h=%f, min=%f B+h=%f\n", i, sqrt(i+1), A,B, h, min, B+h);
		if (min > B + h)
			min = B + h;
		B += tmp;
	}
	printf("%.10f\n", min);
	
	return (0);
}