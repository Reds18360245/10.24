#include<stdio.h>
#include<stdlib.h>

int main()
{
	double rate = 10;
	for (int i = 0; i < 5; i++)
	{
		double nmoney = 5000;
		for (int j = 0; j < 15; j++)
		{

			nmoney = nmoney + nmoney * rate / 100;
		}
		printf("本金 $5000,年利率%.1f%%,最終總金額為%.2f\n", rate, nmoney);
		rate = rate + 0.5;
	}

	system("pause");
	return 0;

}