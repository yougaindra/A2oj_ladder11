#include<stdio.h>

int main()
{
	char s1[105],s2[105];
	scanf("%s %s",s1,s2);
	int i=0;
	while(s1[i] != '\0')
	{
		printf("%d",!(s1[i]==s2[i]));
		i++;
	}
	return 0;
}