#include<stdio.h>
#include<stdlib.h>
#define N 3
void addition(int A[N][N],int B[N][N])
{
    int C[N][N],i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            
        }
        printf("\n");
    }

    printf("MATRIX ADDITION IS: \n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}

void subtraction(int A[N][N],int B[N][N])
{
    int C[N][N],i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            C[i][j]=A[i][j]-B[i][j];
            
        }
        printf("\n");
    }

    printf("MATRIX SUBTRACTION IS: \n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ",C[i][j]);
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
    addition(arr1,arr2);
    subtraction(arr1,arr2);
}
