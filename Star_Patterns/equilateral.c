#include <stdio.h>

int main()
{
	int n = 5;
	for (int i = 1; i <= n; i++)
	{
		//Print Spaces Here
		for(int j = i; j < n; j++)
		{
			printf(" ");
		}
		//Print Stars Here
		for(int j = 1; j <= (2 * i - 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
