#include<stdio.h>

int main(){
	int i,j,k,m,n,sum;
	printf("Enter size of row :");
	scanf("%d",&n);
	printf("Enter size of column :");
	scanf("%d",&m);	
	int a[n][m],t[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter element :");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			t[j][i] = a[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	
}
