#include<stdio.h>
main()
{
    int a[100],largest,second_largest,i,n;
    
	printf("enter a value=\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);	
		}
	
    printf("second largest number in arry= \n");
    
    for(i=0;i<n;i++)
    {
    	if(largest<a[i])
    	{
    		second_largest=largest;
    		largest=a[i];
	    	}
    
		else if(second_largest<a[i])
    	{
    		second_largest=a[i];
			}
				}
		printf("%d",second_largest);
}
