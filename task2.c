#include<stdio.h>
main()
{
	int r,c,i,j;
	printf("enter the array row size : ");
	scanf("%d",&r);
	 
	printf("enter the array column size : ");
	scanf("%d",&c);
	 
	int a[r][c];
	printf("enter array's' elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int k=a[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>k)
			{
				k=a[i][j];
			}
		}
	}
	printf("The largest element in this array is:%d\n",k);
}