#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	map < string , int > score;
	while(n--)
	{
		string temp;
		cin >> temp;
		score[temp]++;

	}

	string ans;
	int mx = 0;
	for(auto const &i : score)
	{
		if(i.second > mx)
		{
			mx = i.second;
			ans = i.first;
		}
	}

	cout << ans;
	return 0;
}