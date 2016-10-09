#include <stdio.h>

int main()
{
	long long x;
	scanf("%lld",&x);
	int chk = 0;
	while(x)
	{
		if(x%10 == 4 || x%10 == 7)
			chk++;
		x/=10;
	}

	if(chk == 4 || chk == 7)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}