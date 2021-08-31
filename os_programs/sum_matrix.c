#include<stdio.h>

int main(){
	int i,j,k,m,n,sum;
	printf("Enter size of row :");
	scanf("%d",&n);
	printf("Enter size of column :");
	scanf("%d",&m);	
	int a[n][m],b[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter element :");
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter 2nd matrix values :");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter element :");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			a[i][j] = a[i][j]+b[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
