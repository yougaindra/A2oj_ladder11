#include <stdio.h>


int main()
{
	int n,k,i,t;
	scanf("%d %d",&n,&k);
	char str[1000];
	scanf("%s",str);
	for(t = 0;t<k;t++)
	{
		for(i=0;str[i+1] != '\0';i++)
		{
			if(str[i] == 'B' && str[i+1] == 'G')
			{
				str[i] = 'G';
				str[i+1] = 'B';
				i++;
			}
		}
	}

	printf("%s\n",str );
	return 0;
}