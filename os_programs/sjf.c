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
	c[0] = a[0]+b[0];
	ari[0] = a[0];
	for(i=1;i<n;i++){
		k=0;
		for(j=1;j<n;j++){
			f=0;
			if(a[j]<=c[i-1]){
				for(q=0;q<i;q++){
					if(ari[q]==a[j]){
						break;
						f=1;
					}
				}
			}
			if(f==0){
				arr[k]=a[j];
				k=k+1;
			}
		}
		for(t=0;t<k;t++){
			m = arr[t];
			for(q=0;q<n;q++){
				if(m==a[q]){
					w[t] = b[q];
				}
			}
		}
		pos = w[0];
		for(t=1;t<k;t++){
			if(w[t]<pos){
				pos = w[t];
				m = t;
			}			
		}
		c[i] = c[i-1] + w[m];
		ari[i] = arr[m];
	}
	for(i=0;i<n;i++){
		printf("%d",c[i]);
	}
	sjf(n,a,b,c);
}
