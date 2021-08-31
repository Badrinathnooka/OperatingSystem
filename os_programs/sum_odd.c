#include<stdio.h>

int main(){
	int n,i,sum=0;
	printf("Enter size of array :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter element :");
		scanf("%d",&a[i]);
		if(a[i]%2!=0){
			sum = sum + a[i];
		}
	}5
	
	printf("%d",sum);
}
