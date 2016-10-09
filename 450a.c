#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int x,i;
	int mn = 0,ans = n-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x%m == 0)
			x/=m;
		else
			x = x/m+1;

		if(x >= mn)
		{
			mn = x;
			ans = i;
		}
	}
	printf("%d\n",ans+1);
	return 0;

}	