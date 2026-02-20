#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    int at[10],bt[10],ct[10],wt[10],tat[10];
    printf("Enter the number of processes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the arrival time and burst time of process %d: ",i+1);
        scanf("%d%d",&at[i],&bt[i]);    
        ct[0]=at[0]+bt[0];
        for(i=1;i<n;i++){
            if(at[i]>ct[i-1]){
                ct[i]=at[i]+bt[i];
            }
            else{
                ct[i]=ct[i-1]+bt[i];
            }
        }
        for(i=0;i<n;i++){
            tat[i]=ct[i]-at[i];
            wt[i]=tat[i]-bt[i];
            printf("process %d: arrival time=%d, burst time=%d, completion time=%d, waiting time=%d, turnaround time=%d\n",i+1,at[i],bt[i],ct[i],wt[i],tat[i]);
        }
        return 0;
    }
}   