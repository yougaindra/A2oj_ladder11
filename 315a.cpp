#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n],j,i;
	for(i=0;i<n;i++)
		scanf("%d %d",&a[i],&b[i]);
	int ans = n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(b[j] == a[i] && j != i)
			{
				ans--;
				break;
			}
	}

	printf("%d\n",ans);
	return 0;
}