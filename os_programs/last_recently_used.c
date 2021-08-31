#include<stdio.h>
#include<string.h>

int main(){
	int i,j,n,k,p,f=0,flag = 0,m,ind,min;
	printf("Enter size of main memory :");
	scanf("%d",&n);
	printf("Enter number of pages to enter :");
	scanf("%d",&k);
	int a[n],b[k],c[k];
	for(i=0;i<k;i++){
		printf("Enter page :");
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		c[i] = 0;
	}
	for(i=0;i<k;i++){
		flag = 0;
		for(j=0;j<f;j++){
			if(a[j]==b[i]){
				flag = 1;
				break;
			}
		}
		if(flag==1){
			printf("\nHit\n");
			}
		else{
			printf("\nMiss\n");
			if(f<n){
				a[f] = b[i];
				f=f+1;
			}
			else{
				min = 99;
				for(m=0;m<n;m++){
					for(p=i-1;p>=0;p--){
						if(a[m]==b[p] && min>p){
							min = p;
							ind = m;
							break;
						}
					}
				}
				a[ind] = b[i];
		}
	}
		for(j=0;j<f;j++){
			printf("%d  ",a[j]);
		}
		
}
}
	
