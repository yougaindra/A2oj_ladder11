#include <stdio.h>
int main()
{
	char s[102];
	scanf("%s",s);
	char ans[202];
	int cnt=0,i=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i] == 'A' || s[i] == 'a' || s[i] == 'Y' || s[i] == 'y' || s[i] == 'E' || s[i] == 'e' || s[i] == 'i' || s[i] == 'I' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u')
		continue;

		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = (s[i]-'A')+'a';
		ans[cnt++] = '.';
		ans[cnt++] = s[i]; 
	}
	ans[cnt++] = '\0';

	printf("%s",ans);

}