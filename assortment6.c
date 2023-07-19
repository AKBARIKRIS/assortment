#include<stdio.h>
main()
{
	int a[100][100];
	int i,j,n,sum=0;
	
	printf("enter value of rows :");
	scanf("%d",&n);
	
	printf("\nmatrix 1 is = \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
			printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			    printf("%d ",a[i][j]);
			if(i==j)
			{
			   sum=sum+a[i][j];
		    }
		}
				printf("\n");
	}
	            printf("\nsum of diagonal metrix : %d ",sum);
} 
