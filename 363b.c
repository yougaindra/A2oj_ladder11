#include <stdio.h>

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int sum = 0;
	for(i=0;i<k;i++)
		sum+=a[i];
	int ans = 1;
	int last = sum;
	for(i=1;i<n-k+1;i++)
	{
		//printf("%d %d %d\n",temp,a[i-1],a[i+k-1]);
		int temp = last-a[i-1]+a[i+k-1];
		if(temp < sum)
		{
			sum = temp;
			ans = i+1;
		}
		last = temp;
	}
	printf("%d",ans);
	return 0;
}