#include<stdio.h>
int main()
{
    int pid[15],bt[15],n;
    printf("\n Enter the number of processes : ");
    scanf("%d",&n);
    printf("\n Enter process ID of all the process : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&pid[i]);
    }
    printf("\n Enter burst time of all the processes : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    int wt[15];
    wt[0]=0;
    for(int i=1;i<n;i++)
    {
        wt[i]=bt[i-1]+wt[i-1];
    }
    printf("\n Process ID   Burst Time   Waitring Time   Turn Around Time \n");
    float twt=0.0,tat=0.0;
    for(int i=0;i<n;i++)
    {
        printf(" %d\t\t%d\t\t%d\t\t%d\n",pid[i],bt[i],wt[i],bt[i]+wt[i]);
        twt=twt+wt[i];
        tat=tat+(wt[i]+bt[i]);
    }
    float awt=twt/n;
    float att=tat/n;
    printf("\n Avg Waiting Time = %0.2f",awt);
    printf("\n Avg Turn Around Time = %0.2f",att);
    return 0;
}