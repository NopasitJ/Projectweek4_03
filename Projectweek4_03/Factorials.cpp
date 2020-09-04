#include<stdio.h>
long long factorial[10];
void i_factorial();
long long d_factorial(long long n);

int main()
{
	i_factorial();
	long long limit = 999999;
	long long total = 0;
	for (long long  n = 3; n <= limit; n++)
	{
		if (n == d_factorial(n))
		{
			total += n;
		}
	}
	printf("%lld", total);
}
void i_factorial()
{
	factorial[0] = 1;
	for (int x = 1; x <= 9; x++)
	{
		factorial[x] = factorial[x - 1]*x;
	}
}
long long d_factorial(long long n)
{
	long long sum = 0;
	while (n > 0)
	{
		sum += factorial[n % 10];
		n /= 10;

	}
	return sum;
}
