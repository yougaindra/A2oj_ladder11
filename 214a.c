#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i,j;
	int ans = 0;
	for(i=0;i<1000;i++)
		for(j=0;j<1000;j++)
			if(i*i + j == n && i+j*j == m)
				ans++;

	printf("%d",ans);
	return  0;
}