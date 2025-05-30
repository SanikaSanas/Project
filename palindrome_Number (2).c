#include<stdio.h>
int main ()
{
	int n,rev,rem;
	printf("Enter a number =");
	scanf("%d",&n);
	int temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==temp)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}
	return 0;
}
