#include<stdio.h>
#include<string.h>

void main(){
	int n,i,k=50,c=0;
	printf("Enter number of requests:");
	scanf("%d",&n);
	int rq[n];
	for(i=0;i<n;i++){
		printf("Enter request :");
		scanf("%d",&rq[i]);
	}
	for(i=0;i<n;i++){
		c = c + abs(k-rq[i]);
		k = rq[i];
	}
	c = c + abs(k-rq[0]);
	k = rq[0];
	printf("%d",c);
}
/*
	while(i<n){
		while(rq[i]<rq[i+1] & i!=n-2){
			i=i+1;
		}
		c = c + abs(k-rq[i]);
		k = rq[i];
		i=i+1;
	}
*/
