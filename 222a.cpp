#include <stdio.h>

int max(int a,int b){return a>b?a:b;}

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int i,a[n];
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	int chk = 1;
	for(i=--k;i<n && chk ; i++)
		chk = a[i] == a[k];
	if(!chk)
	{
		printf("-1\n");
		//printf("ff\n");
		return 0;
	}

	int res = -1;
	for(i=0;i<n;i++)
	{
		if(a[i] != a[k])
			res = max(res,i);
	}

	printf("%d\n",res+1);
	return 0;
}