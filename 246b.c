#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,sum = 0;
	for(i=0;i<n;i++)
	{
		int temp;
		scanf("%d",&temp);
		sum+=temp;
	}

	if(sum%n==0)
		printf("%d\n",n );
	else
		printf("%d\n",n-1 );


}