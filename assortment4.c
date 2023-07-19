#include<stdio.h>

main()
{
	int a[100][100],b[100][100];
	int i,j,sum[100][100],n1,n2;
	printf("enter value of rows =");
	scanf("%d",&n1);
	printf("enter value of colums =");
	scanf("%d",&n2);
	
	printf("\n matrix 1 is =");
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
			printf("\n matrix 2 is =");
	for(i=0;i<n1;i++)
    	{
		for(j=0;j<n2;j++)
		{
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
			printf("\n");
    	}
	for(i=0;i<n1;i++)
    	{
		for(j=0;j<n2;j++)
		{
			printf("%d ",b[i][j]);
		}
			printf("\n");
     	}
			printf("\n sum of to metrix =");
	for(i=0;i<n1;i++)
	    {
		for(j=0;j<n2;j++)
		{
		    sum[i][j]=a[i][j]+b[i][j];
		}
			printf("\n");
	    }
		for(i=0;i<n1;i++)
    	{
		for(j=0;j<n2;j++)
		{
		    printf("%d  ",sum[i][j]);
		}
			printf("\n");
	    }
}
