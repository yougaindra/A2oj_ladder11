#include <stdio.h>

int main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);

	int new[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			new[i][j] = a[i][j];
			if(i+1<3)
				new[i][j] += a[i+1][j];
			if(i-1>=0)
				new[i][j] += a[i-1][j];
			if(j+1<3)
				new[i][j] += a[i][j+1];
			if(j-1>=0)
				new[i][j] += a[i][j-1];

		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d",!(new[i][j]%2));
		printf("\n");
	}
}