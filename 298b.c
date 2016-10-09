#include <stdio.h>

int main()
{
	int t,sx,sy,ex,ey;
	scanf("%d %d %d %d %d",&t,&sx,&sy,&ex,&ey);
	char s[t+1];
	scanf("%s",s);
	int i;
	for(i=0;s[i] != '\0';i++)
	{
		if(s[i] == 'S' && abs(sy-1 - ey) < abs(sy-ey))
		{
			sy -= 1;
			//printf("sy %d %d\n",sx,sy );
		}
		else if(s[i] == 'E' && abs(sx+1 - ex) < abs(sx-ex))
		{
			sx += 1;
			//printf("sx %d %d\n",sx,sy );
		}
		else if(s[i] == 'W' && abs(sx-1 - ex) < abs(sx-ex))
		{
			sx -= 1;
			//printf("sx %d %d\n",sx,sy );
		}
		else if(s[i] == 'N' && abs(sy+1 - ey) < abs(sy-ey))
		{
			sy += 1;
			//printf("sx %d %d\n",sx,sy );
		}
		
		//printf("%d %d %d\n",i,sx,sy );
		if(ex == sx && ey == sy)
		{
			printf("%d",i+1);
			return 0;
		}
	}

	if(ex == sx && ey == sy)
		{
			printf("%d",i);
			return 0;
		}
	else
	printf("-1");
	return 0;
}