#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main(void)
{
	int f, r;
	int fr[SIZE] = { 0 };

	srand(time(NULL));

	for (r = 1; r <= 6000; r++)
	{
		f = 1 + rand() % 6;
		++fr[f];
	}

	printf("%s%17s\n", "Face", "Frequency");

	for (f = 1; f < SIZE; f++)
	{
		printf("%4d%17d\n", f, fr[f]);
	}

	system("pause");
	return 0;
}