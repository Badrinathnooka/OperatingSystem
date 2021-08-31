#include<stdio.h>
#include<string.h>

int main(){
	int i,j,n,k,p,f=0,r=0,flag = 0;
	printf("Enter size of main memory :");
	scanf("%d",&n);
	printf("Enter number of pages to enter :");
	scanf("%d",&k);
	int a[n];
	for(i=0;i<n;i++){
		a[i] = -1;
	}
	for(i=0;i<k;i++){
		flag = 0;
		printf("\nEnter page number :");
		scanf("%d",&p);
		for(j=0;j<n;j++){
			if(a[j]==p && a[j]!=-1){
				flag = 1;
				break;
			}
		}
		if(flag==1){
			printf("\nHit\n");
		}
		else{
			if(f<n){
				a[f] = p;
				f++;
			}
			else{
				a[0] = p;
				f=1;
				
			}
			printf("\nMiss\n");
		}
		for(j=0;j<n;j++){
				if(a[j]!=-1)
					printf("%d ",a[j]);
			}
	}
	
	
}
