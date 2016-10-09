#include <stdio.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	int i,j,a[n*m];
	for(i=0;i<n*m;i++)
		scanf("%d",a+i);

	int src = a[0]%k;
	int flag = 1;
	for(i=1;i<m*n;i++)
	{
		if(a[i]%k != src)
			flag = 0;
	}

	if(flag)
	{
		qsort(a,m*n,sizeof(int),compare);

		int median  = a[(m*n-1)/2];
		int ans = 0;
		for(i=0;i<m*n;i++)
			ans+=(abs(a[i]-median))/k;
		if((m*n)%2 == 0)
		{
			ans = 0;
			median = a[(m*n-1)/2+1];
			for(i=0;i<m*n;i++)
				ans+= (abs(a[i]-median))/k;
			printf("%d\n",ans);
		}
		else
		printf("%d\n",ans);
	}
	else
		printf("-1\n");
}