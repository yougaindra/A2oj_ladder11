#include <stdio.h>
#include <string.h>

int main()
{
	char str[1005];
	scanf("%s",str);
	printf("%c%s",toupper(str[0]),str+1);
	return 0;
}