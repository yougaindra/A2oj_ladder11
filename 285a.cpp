#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	long long int ans = 0;
	long long int sum = 0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);

	for(i=0;i<n;i++)
	{
		ans += abs(i+1 - a[i]);
	}
	printf("%lld",ans);
	return 0;

}