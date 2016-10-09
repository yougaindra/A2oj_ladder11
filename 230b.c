#include <stdio.h>
#include <math.h>

int prime[1000006];

void sieve()
{
	prime[0] = prime[1] = 1;
	int i;
	for(i=0;i<1000005;i++)
	{
		if(!prime[i])
		{
			int j = 2*i;
			while(j<1000005)
			{
				prime[j] = 1;
				j+=i;
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	sieve();
	long long int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		long long int temp = sqrt(a[i]);
		//printf("%d\n",temp );
		if(temp*temp == a[i] && !prime[temp])
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;	
}