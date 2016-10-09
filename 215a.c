#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	int m;
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++)
		scanf("%d",b+i);
	int j;
	int mx = 0,cnt = 0;

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(b[j]%a[i] == 0)
			{
				if(b[j]/a[i] > mx)
				{
					cnt = 1;
					mx = b[j]/a[i];
				}
				else if(b[j]/a[i] == mx)
					cnt++;
			}
		}
	}
	printf("%d\n",cnt);
	return 0;
}