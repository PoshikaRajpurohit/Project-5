#include <stdio.h>

int main() {
    int r,c,i,j;
    
    printf("Enter  row and column size: ");
    scanf("%d", &r);
    printf("Enter  column size: ");
    scanf("%d", &c);
    

    int a[r][c], t[c][r];

    printf("Enter array's elements:\n");
    for (i = 0;i<r;i++) 
	{
        for (j=0;j<c;j++) 
		{
			printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
	for (i=0;i<r;i++) 
	{
        for(j=0;j<c;j++) 
		{
            t[j][i]=a[i][j];
        }
    }
	printf("The transpose of an array:\n");
    for (i=0; i<c; i++) {
        for (j = 0;j<r; j++) {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }

  
}