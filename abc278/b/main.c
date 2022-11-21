#include <stdio.h>

int	main(void)
{
	int H, M;
	int A, B, C, D;

	scanf("%d %d", &H, &M);
	
	A = H / 10;
	B = H % 10;
	C = M / 10;
	D = M % 10;

	int AB = A*10+B;
	int CD = C*10+D;

	if (A * 10 + C <= 23 && B * 10 + D <= 59)
		printf("%d %d\n", AB, CD);
	else
	{
		int i = AB;
		int	j= CD;
		while (i <= 23)
		{
			while (j <= 59)
			{
				A = i / 10;
				B = i % 10;
				C = j / 10;
				D = j % 10;
				// printf("loop i=%d j=%d %d %d %d %d AC=%d BD=%d\n",i,j, A, B, C,D, A*10+C, B*10+D);
				
				if (0 <= A*10+C && A*10+C <= 23 && 0 <= B*10+D && B*10+D <= 59)
				{
					printf("%d %d\n", A*10+B, C*10+D);
					return (0);
				}
				j++;
			}
			
			if (i == 23 && j == 60)
			{
				i = 0;
				j = 0;
			}
			else
			{
				j = 0;
				i++;
			}
		}
	}
	
	return (0);
}