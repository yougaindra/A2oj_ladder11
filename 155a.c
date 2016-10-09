#include <stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	int min,max,ans = 0;
	scanf("%d",&min);
	max = min;
	for(i=1;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		if(x > max)
			ans++,max = x;
		else if(x < min)
			ans++,min = x;
	}

	printf("%d\n",ans);
	return 0;
}