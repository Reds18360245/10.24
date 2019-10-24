#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, i, u;
	printf("Please enter a length:");
	scanf_s("%d", &b);
	printf("Please enter a breadth:");
	scanf_s("%d", &a);
	for (i = 0; i < a; i++)
	{
		for (u = 0; u < b; u++)
		{
			if ((i == 0) || (i == a - 1) || (u == 0) || (u == b - 1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;

}