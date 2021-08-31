#include<stdio.h>

int mcm(int a[],int i,int j){
	int k,temp;
	if(i<=j){
		return 0;
	}
	for(k=i;k<j;k++){
		temp = mcm(a,i,k) + mcm(a,k+1,j) + a[i-1]*a[k]*a[j] ;
		if(temp<min)
			min = temp;
	}
	return min;
}

int main(){
	int n,i=1,p;
	printf("Enter number of matrices:");
	scanf("%d",&n);
	int a[n],j=n-1;
	p = mcm(a,i,j);
	printf("%d",p);	
}
