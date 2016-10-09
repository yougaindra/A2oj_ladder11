#include <bits/stdc++.h>
using namespace std;

int main()
{
	int g[5][5];
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			scanf("%d",&g[i][j]);

	int o[5];
	for(int i=0;i<5;i++)
		o[i] = i;
	int ans = 0;
	do
	{
		int cnt=0;
        cnt+=g[o[0]][o[1]]+g[o[1]][o[0]];
        cnt+=g[o[2]][o[3]]+g[o[3]][o[2]];
        cnt+=g[o[1]][o[2]]+g[o[2]][o[1]];
        cnt+=g[o[3]][o[4]]+g[o[4]][o[3]];
        cnt+=g[o[2]][o[3]]+g[o[3]][o[2]];
        cnt+=g[o[3]][o[4]]+g[o[4]][o[3]];
        ans=max(ans,cnt);
	}
	while(next_permutation(o,o+5));
	printf("%d\n",ans);
	return 0;
}