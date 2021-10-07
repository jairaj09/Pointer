#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n=0,i=0;
	printf("enter number of elements of array : ");
	scanf("%d",&n);
    int arr[n];
    int *p = &arr[0];
    printf("\nenter elements of array : \n");
    for(i=0;i<n;i++)
    {
    	scanf("\n%d",&arr[i]);
	}
    
    printf("\nElements of array are : ");
    for(i=0;i<5;i++)
    {
        printf("\n%d",(p+i));
    }
    printf("\nHello world!\n");
    return 0;
}
