#include <stdio.h>

int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int n,a,b,c;
	scanf("%d %d %d %d",&n,&a,&b,&c);
	int dp[n+1];
	int i;
	for(i=0;i<n+1;i++)
		dp[i] = 0;
	dp[0] = 1;
	for(i=0;i+a<=n;i++)
	{
		if(dp[i]!=0)
			dp[i+a] = dp[i]+1;
	}
	for(i=0;i+b<=n;i++)
		if(dp[i]!=0)
			dp[i+b] = max(dp[i]+1,dp[i+b]);

	for(i=0;i+c<=n;i++)
		if(dp[i]!=0)
			dp[i+c] = max(dp[i]+1,dp[i+c]);
	printf("%d",dp[n]-1);
	return 0;
}