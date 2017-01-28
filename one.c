#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	if(n>0)
	{
		printf("number is positive");
	}
	else if(n<0)
	{
			printf("number is negative");
	}
	else
	{
			printf("number is zero");
	}
	return 0;
}
