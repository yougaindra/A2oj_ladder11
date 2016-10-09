#include <bits/stdc++.h>

using namespace std;

int main()
{
	char s1[1000],s2[1000];
	scanf("%s %s",s1,s2);
	int i;
	for(i=0;s1[i]!='\0';i++)
	{
		s1[i] =tolower(s1[i]);
		s2[i] = tolower(s2[i]);
	}
	//printf("%s %s\n",s1,s2);
	cout << strcmp(s1,s2);
	return 0;
}