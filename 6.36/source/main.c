#include<stdio.h>
#include<stdlib.h>
void kk(const char* s);
int main(void)
{
	char s[10];
	printf("Enter the strings\n");
	scanf_s("%s", &s,10);
	printf("the inverted strings is\n");
	kk(s);
	system("pause");
	return 0;
}
void kk(const char* s)
{
	if (s[0] == '\0')
	{
		return;
	}
	else
	{
		kk(&s[1]);
		printf("%c", s[0]);
	}
}