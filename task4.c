#include <stdio.h>

 main() {
    int r, c, i, j, row, col;
    
    printf("Enter row size: ");
    scanf("%d",&r);
    printf("Enter column size: ");
    scanf("%d",&c);

    int a[r][c];

    printf("Enter array's elements:\n");
    for(i =0;i<r;i++) 
	{
        for(j=0;j<c;j++) 
		{
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    

    printf("Enter row number 0 to %d : ",r-1);
    scanf("%d",&row);

    int rs= 0;
    printf("Elements of row %d: ",row);
    for(j = 0;j<c; j++) {
        printf("%d,",a[row][j]);
        rs=rs+a[row][j];
    }
    printf("\nThe sum of row %d: %d\n",row,rs);


	printf("Enter row number 0 to %d : ",c-1);
    scanf("%d",&col);
    printf("Enter column number: ");
    scanf("%d",&col);

    int cs = 0;
    printf("Elements of column %d: ",col);
    for(i=0;i<r;i++) 
	{
        printf("%d,",a[i][col]);
        cs=cs+a[i][col];
    }
    printf("\nThe sum of column %d: %d\n",col,cs);

}