#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the length of the array:");
	scanf("%d",&n);
	if(n>0){
		int arr[n],i,j,k;
		printf("Enter the array elements: ");
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++)
				if(arr[i]==arr[j]){
					for(k=j;k<n;k++){
						arr[k]=arr[k+1];
					}
					--n;
				}
		printf("Array without duplicate elements:");
		for(i=0;i<n;i++)
			printf(" %d",arr[i]);
	}
	else
		printf("Invalid input.");

	return 0;
}