#include<stdio.h>
#include<stdlib.h>
int kk(int a, int b,int c);
void main(void)
{
	int o, p,op,lp;
	printf("Enter the range(Use ~ interval):");
	scanf_s("%d~%d", &o, &p);
	printf("Enter the number");
	scanf_s("%d", &op);
	lp = kk(o, p, op);
	if(lp!=-1) printf("%d is a range\n",lp);
	else printf("%d is not range\n", op);
	system("pause");
	return;
}
int kk(int a, int b,int c)
{
	for (int j = a; j<=b; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	int m = (a + b) / 2;
	if (m == a&&m == b||a+1==b) return -1;
	if (m == a||m == b) return c;
	if (m != c)
	{
		if (m > c) b = m;
		else a = m;
		kk(a, b, c);
	}
	else return m;
}
