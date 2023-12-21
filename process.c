#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main(){
	int pid,pid1,pid2;
	pid=fork();
	if(pid==-1){
		printf("Error in process creation");
		exit(1);
	}
	if(pid!=0){
	pid1=getpid();
	printf("\nThe parent process ID:%d\n",pid1);
	}else{
	pid2=getpid();
	printf("\nThe child process ID:%d\n\n",pid2);
	}
}
