#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector <int> v[5000];
	FILE *inp,*out;
	inp = fopen("input.txt","r");
	int n,i,j;
	fscanf(inp,"%d",&n);
	for(i=0;i<2*n;i++)
	{
		int x;
		fscanf(inp,"%d",&x);
		x--;
		v[x].push_back(i+1);
	}

	fclose(inp);

	out  = fopen("output.txt","w");

	for(i=0;i<5000;i++)
	{
		if(v[i].size()%2 != 0)
		{
			fprintf(out,"-1\n");
			fclose(out);
			return 0;
		}
	}

	for(i=0;i<5000;i++)
	{
		for(j=0;j<v[i].size();j+=2)
		{
			fprintf(out, "%d %d\n",v[i][j],v[i][j+1]);
		}
	}
	fclose(out);
	return 0;
}