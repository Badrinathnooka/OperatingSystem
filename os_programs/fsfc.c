#include<stdio.h>
#include<string.h>
void Fcfs(int a[],int b[],int n){
	int c[n],t[n],w[n],r[n],i,Avg_TAT=0,Avg_WT=0;
	float s_T,s_W;
	printf("PID ,AT  ,BT  ,CT  ,TAT  ,WT ,RT \n");
	for(i=0;i<n;i++){
		printf("%d     ",i+1);
		printf("%d    ",a[i]);
		printf("%d    ",b[i]);
		if(i==0)
			c[i]=b[i]+a[i];
		else{
			if(a[i]>=c[i-1])
				c[i]=b[i]+a[i];
			else{
				c[i]=c[i-1]+b[i];
			}
			}
		printf("%d    ",c[i]);
		t[i]=c[i]-a[i];
		w[i]=t[i]-b[i];
		printf("%d     ",t[i]);
		printf("%d    ",w[i]);
		printf("%d    ",w[i]);
		printf("\n");
		Avg_TAT = Avg_TAT + t[i];
		Avg_WT = Avg_WT+w[i];
	}
	printf("\n\n");
	s_T = Avg_TAT/n;
	s_W = Avg_WT/n;
	printf("Average TAT = %0.2f\n",s_T);
	printf("Average WT = %0.2f",s_W);
}
int main(){
	int i,n;
	printf("Enter number of processors :");
	scanf("%d",&n);
	int k[n],l[n];
	for(i=0;i<n;i++){
		printf("Enter arrival time and burst time :");
		scanf("%d%d",&k[i],&l[i]);	
	}
	Fcfs(k,l,n);
}

