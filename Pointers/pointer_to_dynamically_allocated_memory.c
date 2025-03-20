#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("\nEnter the size of an array : ");
    scanf("%d",&n);
    int *p= (int *)malloc(n*sizeof(int));
    printf("\nEnter the array elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("\nArray elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    free(p);//free the allocate memory
    return 0;
}