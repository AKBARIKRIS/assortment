#include<stdio.h>
main()
{ 
    int arr[10];
    int i,n;
    
	printf("enter 10 elements in array=");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ernter number of times to right rotate=");
    scanf("%d",&n);
    n = n%10;
  	printf("array before rotation=\n");
    for(i=0;i<10;i++) 
    	{
        	printf("%d ",arr[i]);
    	}
    for(i=0;i<n;i++)
    	{
        	int j,last;
         	last=arr[9];
         
        	for(j=9;j>0;j--)
       	{
            arr[j]=arr[j-1];
        }
       		arr[0]=last;
        }
		printf("\narray after rotation");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}
