#include <stdio.h>

char b[106][106];
int n,m;
int col = 0;
f(int x,int y,int col)
{
	//printf("%d %d\n",x,y);
	if(x<0 || x > n || y < 0 || y > m || b[x][y] == '-')
		return ;
	b[x][y] = col;
	if(x+1 < n && b[x+1][y] == '.' ) f(x+1,y,!col);
	if(x-1 >=0 && b[x-1][y] == '.') f(x-1,y,!col);
	if(y+1 < m && b[x][y+1] == '.') f(x,y+1,!col);
	if(y-1 >=0 && b[x][y-1] == '.') f(x,y-1,!col);
}

int main()
{
	scanf("%d %d",&n,&m);
	int i,j;
	for(i=0;i<n;i++)
		scanf("%s",b[i]);

	

	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(b[i][j] == '.')
				f(i,j,0);
	//printf("gdsfd\n");

	/*for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}*/

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(b[i][j] == '-')
				printf("%c",b[i][j]);
			else if(b[i][j] == 0)
				printf("%c",'B');
			else// if(b[i][j] == '1')
				printf("%c",'W');
		}
		printf("\n");
	}
}