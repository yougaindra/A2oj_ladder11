#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k;
	cin >> k;
	vector <int> a;
	for(int i = 0;i<12;i++)
	{
		int temp;
		cin >> temp;
		a.push_back(temp);
	}

	int sum = accumulate(a.begin(),a.end(),0);
	if(k==0)
		cout << "0" << endl;else
	if(sum < k)
		cout << "-1" << endl;
	else
	{
		sort(a.begin(),a.end());
		reverse(a.begin(),a.end());
		int sum = 0;
		int i;
		for(i=0;i<a.size();i++)
		{
			if(sum+a[i] < k)
				sum+=a[i];
			else
				break;
		}
		cout << i+1 << endl;
	}

	return 0;
}