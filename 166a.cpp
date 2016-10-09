#include <bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
inline bool cmp (const pii &a, const pii &b)
{
    if (a.first != b.first)
        return a.first > b.first;

    return a.second < b.second;
}

int main()
{
	int n,m;
	cin >> n >> m;
	pair<int, int> a[n];
	int i,cnt = 0;
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i].first,&a[i].second);
	}

	sort(a,a+n,cmp);
	for(i=0;i<n;i++)
		if(a[i] == a[m-1])
			cnt++;
	cout << cnt;
	return 0;
}