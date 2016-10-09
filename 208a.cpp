#include <bits/stdc++.h>

using namespace std;
int main()
{
	string s;
	cin >> s;
	string ans;
	int i;
	for(i=0;i<s.size();i++)
	{
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
		{
			i+=2;
			if(ans.size() != 0)
				ans+=string(" ");
		}
		else
			ans += s[i];
	}
	cout << ans;
	return 0;
}