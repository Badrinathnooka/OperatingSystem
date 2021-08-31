#include<stdio.h>
#include<string.h>
void non(int a[],int b[], int g[],int p[],int n){
	int T[n],w[n],r[n],i,j;
	printf("PID ,Pri ,AT  ,BT  ,CT  ,TAT  ,WT ,RT \n");
	for(i=0;i<n;i++){
		printf("%d     ",i+1);
		printf("%d     ",p[i]);
		printf("%d    ",a[i]);
		printf("%d    ",b[i]);
		printf("%d    ",g[i]);
		T[i] = g[i]-a[i];
		printf("%d    ",T[i]);
		w[i] = T[i] - b[i];
		printf("%d    ",w[i]);
		printf("\n");
	}
}
int main(){
	int i,j,k,n,c,m;
	printf("Enter no of processors :");
	scanf("%d",&n);
	int p[n],pri[n],a[n],b[n],g[n],arr[n],temp[n],t,t1,pos,g1[n];
	for(i=0;i<n;i++){
		printf("Enter priority time  and arrival time and burst time of %d:",i);
		scanf("%d %d %d",&pri[i],&a[i],&b[i]);
		p[i]=i+1;
		arr[i]=i+1;
	}
	g[0] = b[0];
	g1[0] = 1;
	arr[0] = 0;
	for(i=1;i<n;i++){
		c=0;
		printf("i=%d",i);
		for(j=0;j<n;j++){
			
			if(arr[j]!=0 && a[j]<=g[i-1]){
				temp[c] = pri[j];
				c=c+1;
			}
		} 
		for(m=0;m<c;m++){
			pos = m;
			for(j=m+1;j<c;j++){
				if(temp[pos]>temp[j]){
					pos = j;
				}
			}
			t = temp[pos];
			temp[pos]  = temp[m];
			temp[m] = t;
		}
		printf("\n");
		for(j=0;j<n;j++){
			if(pri[j]==temp[0]){
				arr[j] = 0;
				g[i] = g[i-1] + b[j];
				g1[i] = p[j];
				break;
			}
		}
}
	for(i=0;i<n;i++){
		pos = i;
		for(j=i+1;j<n;j++){
			if(g1[pos]>g1[j]){
				pos = j;
			}
		}
		t = g1[pos];
		g1[pos]  = g1[i];
		g1[i] = t;
		
		t = g[pos];
		g[pos] =  g[i];
		g[i] = t;
	}
	non(a,b,g,pri,n);
}
