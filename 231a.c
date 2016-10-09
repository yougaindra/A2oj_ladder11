#include <stdio.h>

int f(int a,int b,int c)
{
	return (a&b|b&c|c&a);
}
int main()
{
	int n;
	scanf("%d",&n);
	int ans = 0;
	while(n--)
	{
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		ans += f(a,b,c);
	}
	printf("%d\n",ans );
	return 0;
}