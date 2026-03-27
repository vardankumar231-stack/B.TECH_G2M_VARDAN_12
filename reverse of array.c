#include<stdio.h>
int main(){
	int ar[100],n,i,temp;
	
	printf("enter number of elements:");
	scanf("%d",&n);
	
	printf("enter the %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	
	for(i=0;i<n/2;i++){
		temp=ar[i];
		ar[i]=ar[n-i-1];
		ar[n-i-1]=temp;
	}
	
	printf("reversed array :\n");
	for(i=0;i<n;i++){
		printf("%d",ar[i]);
	}
	
	return 0;
}
