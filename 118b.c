#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<2*n+1;i++)
	{
		for(j=0;j<abs(n-i);j++)
			printf("  ");
		if(i==0 || i==2*n)
			printf("0");
		else if(i<=n)
		{
			for(j=n;j>=(n-i);j--)
				printf("%d ",abs(n-j));
			for(j=i-1;j>=0;j--)
			{
				printf("%d",j );
				if(j!=0)
					printf(" ");
			}
		}
		else
		{
			for(j=0;j<=abs(2*n-i);j++)
				printf("%d ",j );
			for(j=2*n-i-1;j>=0;j--)
			{
				printf("%d",j);
				if(j!=0)
					printf(" ");
			}
		}

		/*for(j=0;j<2*(i-n)+1;j++)
			printf(" ");*/
		printf("\n");
	}
	return 0;
}