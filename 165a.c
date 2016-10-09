#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int map[n][2];
	int i,ans = 0,j;
	for(i=0;i<n;i++)
		scanf("%d %d",&map[i][0],&map[i][1]);
	for(i=0;i<n;i++)
	{
		int left=0,right=0,up=0,down=0;
		for(j=0;j<n;j++)
		{
			if(left*right*up*down)
				break;
			if(i==j)
				continue;
			if(map[j][0] > map[i][0] && map[j][1] == map[i][1])
				right = 1;
			if(map[j][0] < map[i][0] && map[j][1] == map[i][1])
				left = 1;
			if(map[j][0] == map[i][0] && map[j][1] > map[i][1])
				up = 1;
			if(map[j][0] == map[i][0] && map[j][1] < map[i][1])
				down = 1;
		}

		if(left*right*up*down)
			ans++;
	}

	printf("%d\n",ans);
	return 0;
}