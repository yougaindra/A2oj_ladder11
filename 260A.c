#include <stdio.h>

int main()
{
	int a,b,n,i,j;
	scanf("%d %d %d",&a,&b,&n);
	int x = a%b;
	int ans[n];
	for(i=0;i<n;i++)
	{
		ans[i] = -1;
		for(j=0;j<10;j++)
		{
			if((x*10+j)%b == 0)
			{
				ans[i] = j;
				x = (x*10+j)%b;
				break;
			}
		}

		if(ans[i] == -1)
		{
			printf("-1\n");
			return 0;
		}
	}

	printf("%d",a);
	for(i=0;i<n;i++) 
		printf("%d",ans[i]);
	return 0;
}