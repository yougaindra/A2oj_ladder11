#include <stdio.h>

int main()
{
	int y,k,n;
	scanf("%d %d %d",&y,&k,&n);
	int flag = 0;
	int t;
	for(t = 1;t*k <= n && y < n;t++)
	{
		
		int temp = t*k;
		temp-=y;
		if(temp>0)
		{
			flag = 1;
			printf("%d ",temp);		
		}

	}

	if(flag==0)
		printf("-1");
	return 0;
}