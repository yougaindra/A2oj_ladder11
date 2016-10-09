#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int ch25 = 0;
	int ch50 = 0;
	int ch100 = 0;	
	for(i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		if(x == 25)
			ch25 += 1;
		if(x == 50)
		{
			ch50 += 1;
			ch25 -= 1;
		}

		if(x==100)
		{
			ch100 += 1;
			ch25 -= 1;
			if(ch50)
				ch50-=1;
			else
				ch25-=2;
		}

		if(ch25<0 || ch50 <0)
		{
			printf("NO\n");
			return 0;
		}

	}

	printf("YES\n");
	return 0;
}