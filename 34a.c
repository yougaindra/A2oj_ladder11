#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	int mn = 1e9;
	int f,s;
	for(i=0;i<n;i++)
		if(abs(a[i]-a[(i+1)%n]) < mn)
		{
			mn = abs(a[i]-a[(i+1)%n]);
			f = i;
			s = (i+1)%n;
		}
	printf("%d %d\n",f+1,s+1);
	return 0;
}