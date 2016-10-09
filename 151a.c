#include <stdio.h>

int min(a,b){return a<b?a:b;}

int main()
{
	int n,k,l,c,d,p,nl,np;
	scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
	int rounds  = (k*l)/nl;
	rounds /= n;
	int slices  = (c*d)/n;
	int salt    = p/np;
	salt /= n;
	printf("%d",min(rounds,min(slices,salt)));
	return 0;
}