#include<stdio.h>
int main(){
	int ar[100],i,n,largest;
	printf("enter of elements :");
	scanf("%d",&n);
	
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	
	largest=ar[0];
	
	for(i=1;i<n;i++){
		if(ar[i]>largest){
			largest=ar[i];
		}
	}
	
	printf("largest element is %d",largest);
	
	return 0;
}
