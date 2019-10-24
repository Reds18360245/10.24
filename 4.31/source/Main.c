#include<stdio.h> 
#include<stdlib.h>
void printD(int n)
{
	int a = n - 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < a; j++)
			printf(" ");
		for (int j = 0; j <= i; j++)
			printf("* ");

		printf("\n");
		a--;
	}
	a = 0;
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < a; j++)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("* ");

		printf("\n");
		a++;
	}
}

int main()
{
	printD(5);
	system("pause");
	return 0;
}