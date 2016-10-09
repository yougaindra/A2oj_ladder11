#include <stdio.h>

int main()
{
	char str[105];
	scanf("%s",str);
	int up = 0,low = 0,i;
	for(i = 0;str[i] != '\0';i++)
		if(str[i] >= 'A' && str[i] <= 'Z')
			up++;
		else
			low++;
	if(up>low)
		for(i=0;str[i]!='\0';i++)
			printf("%c",toupper(str[i]));
	else
		for(i=0;str[i]!='\0';i++)
			printf("%c",tolower(str[i]));
	return 0;
}