#include <stdio.h>
#include <math.h>


int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	int ans = 0;
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			int k = (i*i) + (j*j);
			int temp =sqrt(k);
			if(temp*temp == k && temp <= n)
				ans++;
		}
	}

	printf("%d",ans);
	return 0;
}