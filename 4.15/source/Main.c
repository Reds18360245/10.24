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
		printf("���� $5000,�~�Q�v%.1f%%,�̲��`���B��%.2f\n", rate, nmoney);
		rate = rate + 0.5;
	}

	system("pause");
	return 0;

}