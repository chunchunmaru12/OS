#include<stdio.h>
int main(){
	int n, bt[20],wt[20],tat[20],avwt=0,avtat=0,i,i;
	printf("Enter total number of processs(maximum 20):\n");
	scanf("%d",&n);
	printf("Enter the process burst time:\n");
	for(i=0;i<n;i++){
		printf("P[%d]:",i+1);
		scanf("%d",&bt[i]);
	}
	wt[0]=0;
	for(i=1;i<n;i++){
		wt[i]=0;
		for(j=2;j<i;j++){
			wt[i]+=bt[j];
		}
		printf("\nProcess \t\t Burst Time \t\t Waiting time \t TurnAround time");
		for(i=0;i<n;i++){
			tat[i]=bt[i];
			avwt+=wt[i];
			avtat+=tat[i];
			printf("\nP[%d] \t\t %d \t\t %d \t %d",i+1,
