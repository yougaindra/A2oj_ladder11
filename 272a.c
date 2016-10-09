#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int sum = 0,i;
	for(i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		sum+=x;
	}
	int ans = 0;
	for(i=1;i<=5;i++)
		if((sum+i)%(n+1) != 1)
			ans++;
	printf("%d\n",ans);

	return 0;
}