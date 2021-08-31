#include<stdio.h>
#include<string.h>

int main(){
	int i,j,k,n,c,m;
	printf("Enter no of processors :");
	scanf("%d",&n);
	int p[n],pri[n],a[n],b[n],g[100],arr[n],temp[n],t,t1=0,pos,g1[100],c1[n],f=1;
	for(i=0;i<n;i++){
		printf("Enter priority time  and arrival time and burst time of %d:",i);
		scanf("%d %d %d",&pri[i],&a[i],&b[i]);
		p[i]=i+1;
		arr[i]=i+1;
	}
	g[0] = 1;
	b[0] = b[0]-1;
	if(b[0]<1){
		arr[0] = 0;
	}
	g1[0] = 1;
	arr[0] = 0;
	while(f!=0){
		printf("%d",t1);
		f=0;
		c=0;
		for(j=0;j<n;j++){
			if(b[j]>0 && arr[j]!=0 && a[j]<=g[i-1]) {
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
	for(j=0;j<n;j++){
			if(pri[j]==temp[0]){
				printf("Yes");
				b[j] = b[j] - 1;
				if(b[j]<1){
					arr[j]=0;
				}
				t1=t1+1;
				g[t1] = g[t1-1] + 1;
				g1[t1] = p[j];
				break;
			}		
	}
	for(i=0;i<n;i++){
		if(arr[i]==1){
			f=1;
		}
	}
	}
	for(i=1;i<=n;i++){
		for(j=n-1;j<=0;j--){
			if(g1[j]==i){
				c1[i-1] = g[j];
			}
		}
	}
	for(i=0;i<t1;i++){
		printf("%d %d\n",g[i],g1[i]);
	}
}
