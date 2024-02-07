#include<stdio.h>
#include<stdlib.h>
void addition(int A[100][100],int B[100][100],int s1,int s2)
{
    int C[s1][s2],i,j;
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            
        }
        printf("\n");
    }

    printf("MATRIX ADDITION IS: \n");
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}

void subtraction(int A[100][100],int B[100][100],int s1,int s2)
{
    int C[s1][s2],i,j;
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            C[i][j]=A[i][j]-B[i][j];
            
        }
        printf("\n");
    }

    printf("MATRIX SUBTRACTION IS: \n");
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr1[100][100],arr2[100][100];
    int s1,s2;
    printf("ENTER THE NUMBER OF ROWS AND COLUMNS OF MATRIX");
    scanf("%d",&s1);
    scanf("%d",&s2);
    printf("Enter Values In 1st Matrix");
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter Values In 2nd Matrix");
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    addition(arr1,arr2,s1,s2);
    subtraction(arr1,arr2,s1,s2);
}
