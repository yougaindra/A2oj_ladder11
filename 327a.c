#include <stdio.h>

int max(int a, int b)
{
	return a>b?a:b;
}
int maxSubArraySum(int a[], int size)
{
	// taken from http://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
   int max_so_far = a[0];
   int curr_max = a[0];
 	int i;
   for (i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int d[n];
	for(i=0;i<n;i++)
		d[i] = a[i]==0?1:-1;
	int s = 0;
	for(i=0;i<n;i++)
		s+=a[i];
	printf("%d\n",s+maxSubArraySum(d,n));
	return 0;

}