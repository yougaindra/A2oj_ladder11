#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	long long int o[n+1],t[n+1],i;
	o[0] = 0;t[0] = 0;
	for(i=1;i<=n;i++)
	{
		int v;
		scanf("%d",&v);
		o[i] = t[i] = v;
	}

	sort(o+1,o+n+1);

	for(i=1;i<=n;i++)
		o[i]+=o[i-1],t[i]+=t[i-1];
	int m;
	scanf("%d",&m);
	while(m--)
	{
		int op,x,y;
		scanf("%d %d %d",&op,&x,&y);
		if(op==1)
			printf("%lld\n",t[y]-t[x-1]);
		else
			printf("%lld\n",o[y]-o[x-1]);
	}

	return 0;
}