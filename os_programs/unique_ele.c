#include<stdio.h>

int main(){
	int i,j,n;
	printf("Enter size of array :");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		printf("Enter elements:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		int c=0;
		for(j=0;j<n;j++){
			if(a[i]==a[j]){
				c=c+1;
			}
		}
		if(c==1){
			printf("%d ",a[i]);
		}
	}
	
}
