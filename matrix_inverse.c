#include<stdio.h>
#define N 3
int determinant(int a[N][N])
{
    return  +a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])
            -a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])
            +a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
}

void transpose(int a[N][N],int t[N][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            t[i][j]=a[j][i];
        }
    }
}

void adjoint(int a[N][N],int adj[N][N])
{
    int t[N][N];
    transpose(a,t);
    adj[0][0]=+(t[1][1]*t[2][2]-t[2][1]*t[1][2]);
    adj[0][1]=-(t[1][0]*t[2][2]-t[2][0]*t[1][2]);
    adj[1][0]=-(t[0][1]*t[2][2]-t[2][1]*t[0][2]);
    adj[0][2]=+(t[1][0]*t[2][1]-t[2][0]*t[1][1]);
    adj[1][2]=-(t[0][0]*t[2][1]-t[2][0]*t[0][1]);
    adj[1][1]=+(t[0][0]*t[2][2]-t[2][0]*t[0][2]);
    adj[2][0]=+(t[0][1]*t[1][2]-t[1][1]*t[0][2]);
    adj[2][1]=-(t[0][0]*t[1][2]-t[1][0]*t[0][2]);
    adj[2][2]=+(t[0][0]*t[1][1]-t[1][0]*t[0][1]);
}

int main()
{
    int arr[N][N],i,j;
    printf("Enter Values In Matrix");
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    int det=determinant(arr);
    int adj[N][N];
    adjoint(arr,adj);
    float inverse[N][N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            inverse[i][j]=(float)adj[i][j]/det;
        }
    }

    printf("\nDETERMINANT VALUE IS:-\n%d",det);
    printf("\nMatrix Adjoint:-\n");
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix Inverse:-\n");
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%f ",inverse[i][j]);
        }
        printf("\n");
    }
}