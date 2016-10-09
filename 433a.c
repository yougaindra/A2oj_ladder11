#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int x = 0,y=0;
	int i;
	for(i=0;i<n;i++)
	{
		int temp;
		scanf("%d",&temp);
		if(temp == 100)
			x++;
		else
			y++;
	}

	if( (x%2 == 0 && y%2 == 0) || (x%2 == 0 && y%2 == 1 && x>=2))
		printf("YES");
	else
		printf("NO");
	return 0;
}