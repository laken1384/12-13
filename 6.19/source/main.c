#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int total;
	int a, b;
	int i;
	int kk[13] = { 0 };
	srand(time(NULL));
	for (i = 0; i < 36000; i++)
	{
		a = 1 + rand() % 6;
		b = 1 + rand() % 6;
		total = a + b;
		++kk[total];
	}
	printf("%s%17s\n", "Total", "Frequency");
	for (total = 2; total <= 12; total++)
	{
		printf("%5d%17d\n", total, kk[total]);
	}
	system("pause");
	return 0;

}