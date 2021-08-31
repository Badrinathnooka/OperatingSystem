#include<stdio.h>
#include<string.h>
void sjf(int n,int a[],int b[]){	//shortest job first foll
	int c[n],t[n],w[n],r[n],i,j,q[n+1];
	c[0] = a[0] + b[0];
	for(i=1;i<n;i++){
		c[i] = c[i-1] + b[i];
	}
	
}
int main()
{
	int i,j,n,temp;
	printf("Enter number of processors :");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		printf("Enter arrival time and burst time of %d:",i);
		scanf("%d%d",&a[i],b[i]);
	}
	for(i=0;i<n;i++){
		pos = i;
		for(j=i+1;j<n;j++){
			if(b[j]<b[pos]){
				pos = j;
			}
			temp = b[i];
			b[i] = b[pos];
			b[pos] = temp;
			
			temp  = p[i];
			p[i] = p[pos];
			p[pos] = temp;
		}
	}
	sjf(n,a,b);
}
