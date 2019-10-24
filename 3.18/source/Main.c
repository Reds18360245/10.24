#include<stdio.h>
#include<stdlib.h>

int main()
{
	float s, a;
	printf("Enter sales in dollers(-1 to end):");
	scanf_s("%f", &s);
	while (s != -1)
	{
		a = s / 100 * 9 + 200;
		printf("Salary is:$%.2f\n", a);
		printf("\n\n");
		printf("Enter sales in dollers(-1 to end):");
		scanf_s("%f", &s);
	}

	system("pause");
	return 0;

}