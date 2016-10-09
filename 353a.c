#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n][2];
	int flip = 0;
	int suml = 0, sumr = 0;
	int i;
	for(i=0;i<n;i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		suml+=x;
		sumr+=y;
		if(x%2 != y%2)
			flip=1;
	}
	//printf("%d\n",(suml%2|| sumr%2));

	if(suml%2 == 0 && sumr%2 == 0)
		printf("0");
	else if(flip && (suml%2 &&  sumr%2))
		printf("1");
	else
		printf("-1");
	return  0;
}