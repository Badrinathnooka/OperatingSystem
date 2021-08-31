#include<stdio.h>
#include<string.h>

int main(){
	int n,max,i;
	printf("Enter size of array :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter element :");
		scanf("%d",&a[i]);
	}
	max = a[0];
	for(i=1;i<n;i++){
		if(max<a[i]){
			max = a[i];
		}
	}
	printf("maximum number of array is %d",max);
}
