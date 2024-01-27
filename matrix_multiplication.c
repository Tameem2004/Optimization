#include<stdio.h>
#include<stdlib.h>
#define N 3
void multiplication(int A[N][N],int B[N][N])
{
    int D[N][N],i,j,k;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            D[i][j]=0;
            for(k=0;k<N;k++)
            {
                D[i][j]=D[i][j]+A[i][k]*B[k][j];
            }
            
        }
        printf("\n");
    }

    printf("MATRIX MULTIPLICATION IS: \n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ",D[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr1[N][N],arr2[N][N];
    printf("Enter Values In 1st Matrix");
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter Values In 2nd Matrix");
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    multiplication(arr1,arr2);
}