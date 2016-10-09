#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int f=0,o=0,i,x;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x==5)
			f++;
		else
			o++;
	}
	if(f<9 && o >0)
		printf("0\n");
	else if(f>=9 && o>=1)
	{
		for(i=0;i<(f/9)*9;i++)
			printf("5");
		for(i=0;i<o;i++)
			printf("0");
	}
	else
		printf("-1\n");
	return 0;

}