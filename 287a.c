#include <stdio.h>

int main()
{
	char grid[4][5];
	int i,j,x,y;
	for(i=0;i<4;i++)
		scanf("%s",grid[i]);

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			int hash = 0,dot = 0;
			grid[i][j] == '.'?dot++:hash++;
			grid[i+1][j] == '.'?dot++:hash++;
			grid[i][j+1] == '.'?dot++:hash++;
			grid[i+1][j+1] == '.'?dot++:hash++;
			if(dot>=3 || hash>=3)
			{
				printf("YES\n");
				return 0;
			}

		}
	}

	printf("NO\n");
	return 0;
}