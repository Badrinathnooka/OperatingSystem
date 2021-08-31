#include<stdio.h>
#include<stdlib.h>
// In this first serves the smallest values from 50 and then after it goes to above 50
//ex if request are 10,95,23,78,80 it serves first 23,10,78,80,95
void main(){
	int n,i,k=50,j,pos,temp,ind,c=0;
	printf("Enter number of request :");
	scanf("%d",&n);
	int rq[n+1],sq[n];
	rq[0] = 50;
	for(i=1;i<n+1;i++){
		printf("Enter request :");
		scanf("%d",&rq[i]);
	}
	for(i=0;i<n+1;i++){//sorting 
		pos = i;
		for(j=i;j<n+1;j++){
			if(rq[pos]>rq[j]){
				pos = j;
			}
		}
		temp = rq[pos];
		rq[pos] = rq[i];
		rq[i] = temp;
	}
	for(i=0;i<n;i++){
		if(rq[i]==k){
			ind =i;
			break;
		}
	}
	j=0;
	for(i=ind-1;i>=0;i--){
		c = c + abs(k-rq[i]);
		sq[j] = rq[i];
		j=j+1;
		k = rq[i];
	}
	for(i=ind+1;i<n+1;i++){
		c=c+ abs(k-rq[i]);
		sq[j] = rq[i];
		j=j+1;
		k = rq[i];
	}
	printf("c=%d\n",c);
	printf("Sequence which execute requests are : ");
	for(i=0;i<j;i++){
		printf("%d ",sq[i]);
	}
	//Another method or shortest method is :
	c = abs(50-rq[0]) + abs(rq[n]-rq[0]);
	printf("\nc=%d",c);
}
