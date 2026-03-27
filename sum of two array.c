#include<stdio.h>
int main(){
	int ar[100],arr[100],i,n,sum[100];
	
	printf(" elements in both arrays is :");
	scanf("%d",&n);
	
	printf("enter elements %d of array",n);
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	
	printf("enter elements of %d of array",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("the sum of two  array is ");
	for(i=0;i<n;i++){
		sum[i] =ar[i] + arr[i]	;
		printf("%d\t",sum[i]);
	}
	
	return 0;
}

