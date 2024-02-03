#include<stdio.h>
#define N 3
int determinant(int a[N][N])
{
    return  +a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])
            -a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])
            +a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
}

int main()
{
    int arr[N][N];
    printf("Enter Values In Matrix");
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    int det=determinant(arr);
    printf("DETERMINANT VALUE IS:-\n%d",det);
}