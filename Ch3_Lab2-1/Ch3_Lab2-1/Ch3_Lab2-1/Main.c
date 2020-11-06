#include<stdio.h>
#include<stdlib.h>

long int fac(int a);

void main(void)
{
	int m, n;
	long int ans,a,b,c;

	printf("求排列組合C(m,n)\n");
	printf("m=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);

	a = fac(m);
	b = fac(n);
	c = fac(m-n);

	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);

	system("pause");
}

long int fac (int p)
{
	int count;
	long int result = 1;

	for (count = 1; count <= p; count++)
	{
		result = result * count;
	}
	return result;
}

