#include <stdio.h>

int prime[1000009];
int fact[1000009];
int sieve()
{
	prime[0] = 1;
	prime[1] = 1;
	long long int i = 2;
	for(i=1;i<1000006;i++)
	{
		long long int j = 2*i;
		while(j<1000006)
		{
			fact[j]++;
			j+=i;
		}
	}
}

int main()
{
	sieve();
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int i,j,k;
	int ans = 0;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			for(k=1;k<=c;k++)
			{
				int temp = i*j*k;
				ans += (fact[temp]+1)%(1<<30);
			}
		}
	}

	printf("%d\n",ans);
}