#include<stdio.h>

int main(){
	int i,j,k,m,n,sum;
	printf("Enter size of row :");
	scanf("%d",&n);
	printf("Enter size of column :");
	scanf("%d",&m);	
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter element :");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		sum = 0;
		for(j=0;j<m;j++){
			sum = sum + a[i][j];
		}
		printf("%d ",sum);
	}
	
}
