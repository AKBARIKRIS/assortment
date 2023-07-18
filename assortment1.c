#include<stdio.h>
main()
{
	int i,n,a[100];
	printf("enter the size of arry =");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n all negetive number in arry =\n");
	for(i=0;i<=n;i++)
	{
		if(a[i]<0)
		{
			printf("%d\n",a[i]);
		}
	}
	
}