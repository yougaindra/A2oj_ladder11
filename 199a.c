#include <stdio.h>

int main()
{
	int fib[100],cnt =0,i;
	fib[0] = 0;
	fib[1] = 1;
	for(i=2;i<100;i++)
		if(fib[i-1]+fib[i-2] <= 1000000000)
			{
				fib[i] = fib[i-1] + fib[i-2];
				cnt++;
			}

	int n;
	scanf("%d",&n);
	int j,k;
	int o = -1,t = -1,th =-1 ;
	for(i=0;i<cnt;i++)
		for(j=0;j<cnt;j++)
			for(k=0;k<cnt;k++)
				if(fib[i]+fib[j]+fib[k] == n)
				{
					o = i;
					t =j;
					th = k;
				}
	if(o!= -1 && t != -1 && th != -1)
		printf("%d %d %d\n",fib[o],fib[t],fib[th]);
	else
		printf("I'm too stupid to solve this problem\n");
	return 0;

}