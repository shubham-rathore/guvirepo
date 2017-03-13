#include <stdio.h>
int main() {
	// your code goes here
	int n,temp,rev=0,num,t,sum=0;
	scanf("%d",&num);
	while(num)
	{
	    sum=sum+num%10;
	    num=num/10;
	}
	n=sum;
	t=n;
	while(n!=0)
	{
	   rev=rev*10;
	   rev=rev+n%10;
	   n=n/10;
	}
	
	if(t==rev)
	{
	    printf("sum of digit is palindrome");
	}
	else
	{
	    printf("sum of digit is not palindrome");
	}
	
	return 0;
}
