#include<stdio.h>
main()
{
	int a[100][100];
	int i,j,trans[100][100],n1,n2;
	
	printf("enter  rows :");
	scanf("%d",&n1);
	
	printf("enter colums :");
	scanf("%d",&n2);
	
	printf("\nmatrix 1 is = \n");
	for(i=0;i<n1;i++)
		{
		for(j=0;j<n2;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
			printf("\n");
		}
	for(i=0;i<n1;i++)
		{
		for(j=0;j<n2;j++)
		{
			printf("%d ",a[i][j]);
		}
			printf("\n");
		}
	for(i=0;i<n1;i++)
		{
		for(j=0;j<n2;j++)
		{
			trans[j][i]=a[i][j];
		}
		}
		printf("transpose matrix is :\n");
	for(i=0;i<n1;i++)
    	{
		for(j=0;j<n2;j++)
		{
		  printf("%d ",trans[i][j]);		
		}
		printf("\n");
    	}
}
