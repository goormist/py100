#include <stdio.h>

double ary_min( double * );

int main()
{
	
	double arr[5]={0, 0, 0, 0, 0};
	double res;
	int i = 0;					// 추가된 부분	
	
	for(i=0; i<5; i++){			// 추가된 부분
		scanf("%lf", &arr[i]);	// 추가된 부분
	}							// 추가된 부분
	
	res=ary_min( arr );
	printf("%.1lf\n", res);

	return 0;
}

double ary_min( double *ap )
{
	int i;
	double min;

	min=ap[0];
	for( i=1; i< 5; i++ ){
		if( ap[i] < min ) 
			min=ap[i];
	}

	return min;
}