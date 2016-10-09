#include <stdio.h>

int min(int a,int b){return a<b?a:b;}
int max(int a,int b){return a>b?a:b;}

int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n][2];
	int rangex = -1,rangey = -1;
	int covx = -1,covy = -1;
	int ans = -1;
	for(i=0;i<n;i++)
	{
		int l,r;
		scanf("%d %d",&l,&r);
		if(rangex == -1 && rangey == -1)
		{
			rangex = l;
			rangey = r;
			covx = l;
			covy = r;
			ans = i+1;
		}
		else if(rangex >= l && rangey <= r)
		{
			rangex = l;
			rangey = r;
			covx = l;
			covy = r;
			ans = i+1;

		}
		else if(rangex > l)
		{
			rangex = l;
			//covx = l;
		}
		else if(rangey < r)
		{
			rangey = r;
			//covy = r;
		}
		//printf("%d %d %d %d\n",rangex,rangey,covx,covy );
	}
	if(rangex == covx && rangey == covy)
		printf("%d",ans);
	else
		printf("-1\n");
	return 0;
}