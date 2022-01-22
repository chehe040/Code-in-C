//
//  main.c
//  sum 2D matrix
//
//  Created by Mahesh Soni on 17/01/21.
//

#include <stdio.h>

#define MAXROW        10
#define MAXCOL        10

int main()
{
    int matrix[MAXROW][MAXCOL];
    int i,j,r,c;
    int sum;
    
    printf("Enter number of Rows :");
    scanf("%d",&r);
    printf("Enter number of Cols :");
    scanf("%d",&c);

    printf("\nEnter matrix elements :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    /*sum and product of all elements*/
    /*initializing sun and product variables*/
    sum        =0;
    
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            sum        +=    matrix[i][j];
            
        }
    
    }

    printf("\nSUM of all elements : %d",sum);
    return 0;
}



