#include<stdio.h>
int main()
{
    int bt[20],wt[20],tat[20],p[20],i,n,j,pos,temp;
    int twt=0,ttat=0;
    float awt,atat;
    printf("\n Enter the no of process : ");
    scanf("%d",&n);
    printf("\n Enter the burst time of the process : ");
    for(i=0;i<n;i++)
    {
        printf("\n Enter burst time for process %d : ",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
            pos=j;
        }
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;

        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
        wt[i]+=bt[j];
        twt+=wt[i];
    }
    awt=(float)twt/n;
    printf("\n Process\t Burst Time\t Waiting Time\t Turnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        ttat+=tat[i];
        printf("\n p%d\t\t %d\t\t %d\t\t\t %d",p[i],bt[i],wt[i],tat[i]);
    }
    atat=(float)ttat/n;
    printf("\n Avarage waiting time = %f",awt);
    printf("\n Avarage turn around time =%f",atat);
}