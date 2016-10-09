#include <stdio.h>

int main()
{
	int n,a,b;
	scanf("%d %d%d",&n,&a,&b);
	int cnt =0,i;
	for(i=0;i<=n;i++)
		if(i-1>=a && n-i <= b)
			cnt++;
	printf("%d\n",cnt);
	return 0;
}