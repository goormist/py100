#include <stdio.h>
#include <stdlib.h>

void StringToDecimal( char *input, int len );

int main(void)
{
	int res=0;
	char input[10];

	scanf("%s", input);
	
	StringToDecimal( input, res );

	return 0;
}

void StringToDecimal( char *input, int res )
{
	res = atoi( input );
	printf( "%d\n", res );
}