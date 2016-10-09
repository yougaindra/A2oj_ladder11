#include <stdio.h>

int prime(int x)
{
	int i;
	if(x < 2) return 0;
	if(x ==2) return 1;
	for(i=2;i*i<=x;i++)
		if(x%i == 0)
			return 0;
	return 1;
}

int main()
{
	int m,n;
	scanf("%d %d",&n,&m);
	int temp = n+1;
	while(!prime(temp)) temp++;
	//printf("%d\n",prime(9));
	if(temp == m)
		printf("YES\n");
	else
		printf("NO\n");
	return 0; 
}