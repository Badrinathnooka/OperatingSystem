#include<stdio.h>

int main(){
	int i,j,n,t=0;
	printf("Enter size of array :");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		printf("Enter elements:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		int c=0,c1 = 0;
		for(j=0;j<n;j++){
			if(a[i]==a[j]){
				c=c+1;
			}
		}
		if(c>1){
			for(j=0;j<t;j++){
				if(a[i] == b[j]){
					c1 = c1+1;
				}
			}
			if(c1==0){
				b[t] = a[i];
				t=t+1;
			}
		}
	}
	for(i=0;i<t;i++){
		printf("%d ,",b[i]);
	}
	
}
