#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int rc = 0,m=1,file = 1,k;
int wait(){
	if(m==1){
		m=0;
		return 0;
	}
	else{
		printf("Cant enter:");
		return 1;
	}
}
int wait1(){
	if(file==1){
		file=0;
		return 0;
	}
	else{
		printf("Cant enter:");
		return 1;
	}
}
void signal(){
	m=1;
}
void signal1(){
	file=1;
}
void Reader(){
	k=wait();
	printf("Reader Entered :\n");
	if(k==1){
		exit(0);
	}
	else{
		rc = rc+1;
		if(rc==1){
			k=wait1();
			if(k==1){
				exit(0);
			}
		}
		signal();
	}
}
void Reader_exit(){ 
	printf("Reader Exited;");
	wait1();
	rc = rc-1;
	if(rc==0){
		signal1();
	}
	signal();
}
void Writer(){
	printf("%d-%d-%d",rc,m,file);
	printf("Writer");
	k = wait1();
	if(k==1){
		exit(0);
	}
}
void WriterExit(){
	signal1();
}
void main(){
	int op;
	do{
	printf("Enter 1)Reader_to_enter 2)Reader_to_exit 3)Writer_to_enter 4)writer_to_exit:");
	scanf("%d",&op);
	switch(op){
		case 0 : printf("Thank you :");
					break;
		case 1 : Reader();
				break;
		case 2 : Reader_exit();
				break;
		case 3 : Writer();
				break;
		case 4 : WriterExit();
				break;
		default : printf("Enter valid input :");
	}
}while(op!=0);
}
