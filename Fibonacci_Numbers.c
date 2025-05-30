#include<Stdio.h>
int main ()
{
	int K,i;
	int K1=1,f,f2=1,f1;
	printf("Enter an integer value of K>2:");
	scanf("%d",&K);
	for(i=0;i<K;++i)
	printf("Wrong input ! Enter an integer value ",K>2);
	scanf("%d",&K);
	for(i=0;i<K;++i)
	if(K<=2)
	{
		printf("The first K fibonacci number is %d ",f1);
		f=f1+f2;
		f1=f2;
		f2=f;
	}
	return 0;
}
