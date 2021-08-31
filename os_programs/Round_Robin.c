#include<stdio.h>
#include<string.h>

void rr(int a[],int b[],int n){
	
}

int main()
{
	int i,j,n,t,c=1,m=1,r=1;
	printf("Enter number of processors :");
	scanf("%d",&n);
	printf("Enter time quantum :")
	scanf("%d",&t);
	int p[n],a[n],b[n],rq[100],run[100],run1[100],k=0;
	for(i=0;i<n;i++){
		printf("Enter arrival time and burst time of %d:",i);
		scanf("%d %d",&a[i],&b[i]);
		p[i]=i+1;
	}
	rq[0] = 1;
	run[0]=1;
	k = b[0]-t;
	if(k>=0){
		run1[0] = t;
		b[0] = k
	}
	else{
		k = t-b[0];
		run1[0] = k;
		b[0] = 0;
	}
	while(){
		for(j=0;j<n;j++){
			if(b[j]>0 and a[j]<=run1[j]){
				rq[c] = j+1;
				c=c+1;
			}
		}
		if(b[run[r-1]-1]>0){
			rq[c] = run[r-1];
			c=c+1;
		}
		k = b[run[r]-1]-t;
		if(k>=0){
			run1[r] = t;
			r=r+1;
			b[run[r]-1] = k
		}
		else{
			k = t-b[run[r]-1];
			run1[r] = k;
			r=r+1;
			b[run[r]-1] = 0;
		}	
	}
	//rr(a,b,n);
}
