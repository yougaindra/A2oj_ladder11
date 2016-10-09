#include <bits/stdc++.h>

using namespace std;

map< int, int > mp;

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	long long int vasya=0, petya= 0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		mp[a[i]] = i;
	}

	int m;
	cin >> m;
	while(m--)
	{
		int x;
		cin >> x;
		vasya += mp[x]+1;
		//printf("%d %d\n",m,mp[x]);
		petya += (n-mp[x]);
	}

	printf("%lld %lld\n",vasya,petya);
	return 0;
}