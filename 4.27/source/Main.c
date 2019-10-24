#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c;
	for (c = 1; c < 500; c++)
	{
		for (b = 1; b < 500; b++)
		{
			for (a = 1; a < 500; a++)
			{
				if (c*c == b * b + a * a)
				{
					printf("%3d^2\t=   %3d^2\t+\t%3d^2\n", c, b, a);
				}
			}
		}
	}
	system("pause");
	return 0;

}