#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int total = 0;
	int ans = -1;
	while(n--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		total += (b-a);
		if(total > ans)
			ans = total;
	}

	printf("%d",ans);
	return 0;
}