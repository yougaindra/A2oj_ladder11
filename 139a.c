#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[7],i,flag = 0;
	for(i=0;i<7;i++)
		scanf("%d",&a[i]);
	while(1)
	{
		for(i=0;i<7;i++)
		{
			n-=a[i];
			if(n<=0)
			{
				flag = 1;
				printf("%d",i+1);
				break;
			}
		}
		if(flag)
			break;
	}

	return 0;
}