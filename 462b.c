#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,k;
	scanf("%lld %lld",&n,&k);
	char s[n+1];
	scanf("%s",s);
	int i;
	long long int alpha[26] = {0};
	for(i=0;s[i]!='\0';i++)
		alpha[s[i]-'A']++;
	sort(alpha,alpha+26);
	long long int ans = 0;
	i =25;
	while(k)
	{
		if(k>alpha[i])
		{
			ans+=(alpha[i]*alpha[i]);
			k-=alpha[i];
		}
		else
		{
			ans+=(k*k);
			break;
		}
		i--;
	}

	printf("%lld\n",ans);
	return 0;
}