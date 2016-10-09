#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	int mx=-1,mx_cnt=0,mn_cnt=0,mn= 1e9+4;
	for(i=0;i<n;i++)
	{
		if(a[i]>mx)
		{
			mx = a[i];
			mx_cnt = 1;
		}
		else if(a[i] == mx)
			mx_cnt++;

		if(a[i] < mn)
		{
			mn = a[i];
			mn_cnt = 1;
		}
		else if(a[i] == mn)
			mn_cnt++;
	}

	//printf("%d %d\n",mn_cnt,mx_cnt );
	if(mx != mn)
		printf("%d %lld",mx-mn,(long long)mx_cnt*mn_cnt);
	else
		printf("%d %lld\n",0,(((long long)n)*(n-1))/2 );
	return 0;
}