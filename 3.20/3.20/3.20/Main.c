#include<stdio.h>
#include<stdlib.h>

int main()
{
	int h;
	float m, t, a;
	printf("Enter # of hours worked(-1 to end):");
	scanf_s("%d", &h);
	while (h != -1)
	{
		printf("Enter hourly rate of the worker($00.00):");
		scanf_s("%f", &m);
		if (h <= 40)
		{
			t = h * m;
			printf("%.2f\n", t);
		}
		else
		{
			a = h - 40;
			t = m * 40 + a * m / 2;
			printf("%.2f\n", t);
		}
		printf("\n\n");
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%d", &h);
	}
	system("pause");
	return 0;

}