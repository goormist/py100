#include <stdio.h>

#define C 5

int main()
{
	int i = 0;
	
	float grade[C] = {0.0, 0.0};
	float sum = 0.0;

	for(i = 0; i < C; i++ )
	{
		scanf("%f", &grade[i]);
		sum += grade[i];
	}

	printf("%.2f\n", sum);

	return 0;
}