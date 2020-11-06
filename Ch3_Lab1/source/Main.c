#include<stdio.h>
#include<stdlib.h>

int Odd(int U);
int Even(int U);
int Total(int U);

int main(void)
{
	int n, Sum;
	char Add;
	printf("1+2+...+n=?請輸入n=");
	scanf_s("%d", &n);
	printf("請問要做奇數和(O),偶數和(E),還是整數和(I)?請選擇");
	scanf_s(" %c", &Add);

	switch (Add)
	{
	case 'O':
			Sum = Odd(n);
			break;
	case 'E':
			Sum = Even(n);
			break;
	case 'I':
			Sum = Total(n);
			break;
		default:
			printf("選擇錯誤\n");
			return -1;
	}
	printf("總合為%d\n", Sum);
	system("pause");
	return 0;
}
int Odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 1)
			total = total + i;
	return total;
}

int Even(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 0)
			total = total + i;
	return total;
}

int Total(int U)
{
	return Odd(U) + Even(U);
}


