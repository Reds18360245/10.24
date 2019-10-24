#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a, b, d;
	int c;
	printf("Enter loan principal(-1 to end):");
	scanf_s("%f", &a);
	while (a != -1)
	{
		printf("Enter interest rate:");
		scanf_s("%f", &b);
		printf("Enter term of the loan in days:");
		scanf_s("%d", &c);
		d = a * b*c / 365;
		printf("The interest charge is:$%.2f\n", d);
		printf("\n\n");
		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &a);
	}

	system("pause");
	return 0;

}