#include <stdio.h>

int main()
{
	char str[205],ans[200];
	scanf("%s",str);
	int cnt = 0,i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i] == '.')
			ans[cnt++] = '0';
		if(str[i] == '-')
		{
			i++;
			if(str[i] == '.')
				ans[cnt++] = '1';
			if(str[i] == '-')
				ans[cnt++] = '2';
		}
	}
	ans[cnt++] = '\0';
	printf("%s\n",ans);
	return 0;
}