#include<stdio.h>
#include<stdlib.h>

void multiplication(int A[10][10],int B[10][10],int r1,int c2,int c1)
{
    int D[10][10],i,j,k;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            D[i][j]=0;
            for(k=0;k<c1;k++)
            {
                D[i][j]=D[i][j]+A[i][k]*B[k][j];
            }
            
        }
        printf("\n");
    }

    printf("MATRIX MULTIPLICATION IS: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",D[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int r1,c1,r2,c2,i,j;
    printf("ENTER THE NUMBER OF ROWS AND COLUMNS IN 1ST ARRAY");
    scanf("%d%d",&r1,&c1);
    printf("ENTER THE ROWS AND COLUMNS IN 2ND ARRAY");
    scanf("%d%d",&r2,&c2);
    int A[10][10],B[10][10],C[10][10];
    
    printf("ENTER NUMBER IN FIRST MATRIX\n");
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
    }

    printf("ENTER NUMBER IN SECOND MATRIX\n");
    {
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&B[i][j]);
            }
        }
    }
    if(c1!=r2)
        {
            printf("\n YOUR ARRAY CANNOT BE MULTIPLIED");
            exit(1);
        }
    else 
        multiplication(A,B,r1,c2,c1);
}
