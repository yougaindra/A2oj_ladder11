#include <stdio.h>
int n;
int a[100007];
int flag =0;
int x= -1;
int y= -1;
int i;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int chk()
{
	for(i=0;i<n-1;i++)
		if(a[i]>a[i+1])
			return 0;
	return 1;
}



int main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	for(i=0;i<n-1;i++)
		if(a[i]>a[i+1])
		{
			x=i;
			break;
		}
	for(i=n-1;i>0;i--)
		if(a[i] < a[i-1])
		{
			y=i;
			break;
		}
	//
		
	//printf("%d %d\n",x,y);
	if(x != -1)
	{
		for(i=0;i<=(y-x)/2;i++)
		{
			//printf("%d %d\n",x+i,y-i );
			swap(a+x+i,a + (y-i));
		}
		flag = chk();
	}
	if(x == -1)
		printf("yes\n1 1\n");
	else if(flag)
		printf("yes\n%d %d\n",x+1,y+1);
	else
		printf("no\n");
	return 0;

}