#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[m],i;
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	long long int ans = 0;
	int curr = 1;
	for(i=0;i<m;i++)
		if(curr <= a[i])
		{
			ans+=a[i]-curr;
			curr = a[i];
		}
		else
		{
			ans+=(n-curr+a[i]);
			curr = a[i];
		}
	printf("%lld\n",ans);
	return 0;
}