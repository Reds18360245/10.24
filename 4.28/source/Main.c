#include<stdio.h>
#include<stdlib.h>

int main()
{
	int code;
	float m, d;
	float mh, hh, hh2, hr, hc, im;
	float moneym, moneyh, moneyc, moneyp;

	printf("Manager have code 1.\nHourly workers have paycode 2.\nCommission workers have paycode 3.\nPieceworkers have paycode 4.\n");
	printf("Enter paycode ( -1 to end): ");
	scanf_s("%d", &code);

	while (code != -1)
	{
		switch (code)
		{
		case 1:
		{
			printf("Enter weekly salary : ");
			scanf_s("%f", &moneym);
			printf("Your salary has $%.2f\n", moneym);
			break;
		}
		case 2:
		{
			printf("Enter a hour of salary:");
			scanf_s("%f", &m);
			printf("Hour:");
			scanf_s("%f", &hh);
			printf("Overtime hours:");
			scanf_s("%f", &hh2);
			if (hh <= 40)
			{
				if (hh2 == 0)
				{
					moneyh = hh * m;
					printf("Your salary has $%.2f\n", moneyh);
				}
				else
				{
					moneyh = hh * m + hh2 * 3 * m / 2;
					printf("Your salary has $%.2f\n", moneyh);
				}

			}
			else
			{
				hr = hh - 40;
				if (hh2 == 0)
				{
					moneyh = hr * m / 2 + 40 * m;
					printf("Your salary has $%.2f\n", moneyh);
				}
				else
				{
					moneyh = hr * m / 2 + 40 * m + hh2 * 3 * m / 2;
					printf("Your salary has $%.2f\n", moneyh);
				}
			}
			break;
		}
		case 3:
		{
			printf("Enter a hour of salary:");
			scanf_s("%f", &m);
			printf("Hour:");
			scanf_s("%f", &hc);
			moneyc = hc * m;
			if (moneyc > 250)
			{
				moneyc = moneyc * 1057 / 1000;
				printf("Your salary has $%.2f\n", moneyc);
			}
			else
			{
				printf("Your salary has $%.2f\n", moneyc);
			}
			break;
		}
		case 4:
		{
			printf("Each item's money:");
			scanf_s("%f", &im);
			printf("Items quantity: ");
			scanf_s("%f", &d);
			moneyp = im * d;
			printf("Your salary has $%.2f\n", moneyp);
			break;
		}
		default:
		{
			printf("Invalid pay code.");
			break;
		}
		}
		printf("\n\n\n");
		printf("Manager have code 1.\nHourly workers have paycode 2.\nCommission workers have paycode 3.\nPieceworkers have paycode 4.\n");
		printf("Enter paycode ( -1 to end): ");
		scanf_s("%d", &code);
	}
	system("pause");
	return 0;

}