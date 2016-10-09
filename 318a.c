#include <stdio.h>

int main()
{
	long long int n,q;
	scanf("%lld %lld",&n,&q);
	if(q <= ((n+1)/2))
		printf("%lld\n",2*q-1);
	else
	{
		q -= ((n+1)/2);
		printf("%lld\n",2*q);
	}
	return 0;
}