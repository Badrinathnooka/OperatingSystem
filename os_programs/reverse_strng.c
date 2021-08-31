#include<stdio.h>
#include<string.h>

int main(){
	int n,i,temp;
	printf("Enter size of array :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter element :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n/2);i++){
		temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
}
