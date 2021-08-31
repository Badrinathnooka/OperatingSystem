  #include<stdio.h>
#include<string.h>
//criteria : Burst Time
void sjf(int n,int a[],int b[],int c[]){	//shortest job first foll
	int t[n],w[n],r[n],i,t1=0,w1=0;
	printf("PID ,AT  ,BT  ,CT  ,TAT  ,WT ,RT \n");
	float Avg_TAT,Avg_Wt;
	c[0] = a[0] + b[0];
	for(i=1;i<n;i++){
		c[i] = c[i-1] + b[i];
	}
	for(i=0;i<n;i++){
		printf("%d     ",i+1);
		printf("%d    ",a[i]);
		printf("%d    ",b[i]);		
		t[i]=c[i]-a[i];
		w[i] = t[i] - b[i];
		t1=t1+t[i];
		w1=w1+w[i];
		r[i] = w[i]; //In Non-premetive waiting and response time is same
		printf("%d    ",c[i]);
		printf("%d     ",t[i]);
		printf("%d    ",w[i]);
		printf("%d    ",r[i]);
		printf("\n");
	}
	printf("\n\n");
	Avg_TAT = t1/n;
	Avg_Wt = w1/n; 
	printf("Average TAT = %0.2f\n",Avg_TAT);
	printf("Average WT = %0.2f",Avg_Wt);
}
int main()
{
	int i,j,n,temp,pos;
	printf("Enter number of processors :");
	scanf("%d",&n);
	int arr[n],ct1[n],ari[n],k,t,q,w[n],m;
	int a[n],b[n],c[n],f=0;
	for(i=0;i<n;i++){
		printf("Enter arrival time and burst time of %d:",i);
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(b[j]>b[j+1]){
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp ;
				
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	sjf(n,a,b,c);
}
