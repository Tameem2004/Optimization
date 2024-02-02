#include<stdio.h>

void transpose(int a[100][100],int s1,int s2)
{
	int t[s2][s1];
    for(int i=0;i<s2;i++)
    {
        for(int j=0;j<s1;j++)
        {
            t[i][j]=a[j][i];
        }
    }
    printf("Transpose Matrix Is:-\n");
    for(int i=0;i<s2;i++)
    {
        for(int j=0;j<s1;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int arr[100][100],i,j,s1,s2;
    printf("Enter Size of Matrix\n");
    scanf("%d",&s1);
    scanf("%d",&s2);
    printf("Enter Values In Matrix\n");
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your Entered Matrix Is:-\n");
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
	transpose(arr,s1,s2);
}