#include <bits/stdc++.h>
using namespace std;


bool chk(string num)
{
	for(int i = 0;i<(int)num.size();i++)
		if(num[i] != '1' && num[i] != '4')
			return false;

	if(num[0] == '4')
		return false;
	if(num.find("444") != num.npos)
		return false;
	return true;
}
int main()
{
	string num;
	cin >> num;
	if(chk(num))
		cout << "YES";
	else
		cout << "NO";
	return 0;

}