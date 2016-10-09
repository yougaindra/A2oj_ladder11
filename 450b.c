#include <stdio.h>
#define mod 1000000007

/*int mat[2][2] = {{1,-1},{1,0}}

int nth(int n)
{

}*/

int main()
{
	int f[6],n;
	scanf("%d %d",f+1,f+2);
	if(f[1] <0) f[1]+=mod;
	if(f[2] <0) f[2]+=mod;
	f[3] = f[2]-f[1];
	if(f[3]<0) f[3]+=mod;
	f[4] = (mod-f[1])%mod;
	f[5] = (mod-f[2])%mod;
	f[0] = (mod-f[3])%mod;
	int i;
	for(i=0;i<6;i++)
		printf("%d\n",f[i] );
	scanf("%d",&n);
	printf("%d\n",f[n%6]);
	return 0;
}