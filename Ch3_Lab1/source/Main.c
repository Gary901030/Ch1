#include<stdio.h>
#include<stdlib.h>

int Odd(int U);
int Even(int U);
int Total(int U);

int main(void)
{
	int n, Sum;
	char Add;
	printf("1+2+...+n=?�п�Jn=");
	scanf_s("%d", &n);
	printf("�аݭn���_�ƩM(O),���ƩM(E),�٬O��ƩM(I)?�п��");
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
			printf("��ܿ��~\n");
			return -1;
	}
	printf("�`�X��%d\n", Sum);
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


