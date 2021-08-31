#include<stdio#include<stdio.h>

int main(){
	int i,j,k,m,n,sparse_count=0;
	printf("Enter size of row :");
	scanf("%d",&n);
	printf("Enter size of column :");
	scanf("%d",&m);	
	int a[n][m],t[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter element :");
			scanf("%d",&a[i][j]);
			if(a[i][j]==0){
				sparse_count = sparse_count + 1;
			}
		}
	}
	if(sparse_count >((m*n)/2)){
		printf("Given matrix is Sparse matrix ");
	}
	else{
		printf("Given matrix is not a Sparse matrix ");
	}
	printf("There are %d number of zeros",sparse_count);
}
}
