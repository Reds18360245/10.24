#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	int v = -1;
	float b, c, d, e, f;
	printf("Enter account number (-1 to end):");
	scanf_s("%d", &a);
	while (a != v)
	{
		printf("Enter beginning balance:");
		scanf_s("%f", &b);
		printf("Enter total charges:");
		scanf_s("%f", &c);
		printf("Enter total credits:");
		scanf_s("%f", &d);
		printf("Enter credit limit:");
		scanf_s("%f", &e);

		f = b + c - d;

		if (f > e)
		{
			printf("Account:%d\t\n", a);
			printf("Credit Limit:%.2f\t\n", e);
			printf("Balance:%.2f\t\n", f);
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n\n");
		printf("Enter account number (-1 to end):");
		scanf_s("%d", &a);
	}
	system("pause");
	return 0;

}