#include<stdio.h>
main()
{
	int i,n;
	printf("Enter your array size: ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter  elements of the array : \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Negative elements in the array are: ");
	for(i=0;i<n;i++)
	{
		if(a[i]< 0)
		{
			printf("%d,",a[i]);
		}
		
	}
}