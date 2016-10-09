#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int l_zero = 0,l_one = 0,r_zero = 0,r_one  = 0;
	while(n--)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		x == 0 ? l_zero++:l_one++;
		y == 0 ? r_zero++:r_one++;
	}

	printf("%d\n",(l_zero < l_one ? l_zero : l_one)+ (r_zero < r_one ? r_zero:r_one));
	return 0;
}