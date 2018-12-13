#include<stdio.h>
#include<stdlib.h>
int kk(int *s,int b);
void main(void)
{
	int s[6];
	int max;
	s[5] = 0;
	printf("Enter 5 numbers(Use blank key interval):");
	scanf_s("%d %d %d %d %d", &s[0], &s[1], &s[2], &s[3], &s[4]);
	max=kk(&s, 0);
	printf("%d is maximum\n", max);
	system("pause");
	return;
}
int kk(int *s,int b)
{
	if (s[0] == 0)
	{
		return b;
	}
	else
	{
		if (s[0] > b)b = s[0];
        kk(&s[1], b);
		
	}
}