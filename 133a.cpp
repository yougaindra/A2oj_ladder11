#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s1;
	cin >> s1;
	int flag= 0;
	for(auto i : s1)
	{
		if(i == 'H' || i == 'Q' || i == '9')
			flag = 1;
	}

	if(flag)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}