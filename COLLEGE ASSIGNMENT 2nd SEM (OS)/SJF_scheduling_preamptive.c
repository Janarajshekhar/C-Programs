#include<stdio.h>
int main()
{
    int time,burst_time[10],at[10],sum_burst_time=0,smallest,n,i;
    int sumt=0,sumw=0;
    printf("\n Enter the no of processes : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n The arrival for processes p%d : ",i+1);
        scanf("%d",&at[i]);
        printf("\n The burst time for processes p%d : ",i+1);
        scanf("%d",&burst_time[i]);
        sum_burst_time += burst_time[i];
    }
    burst_time[9]=9999;
    printf("\nprocess |Turn Around Time| Waiting Time\n");
    for(time=0;time<sum_burst_time;)
    {
        smallest=9;
        for(i=0;i<n;i++)
        {
            if(at[i]<=time && burst_time[i]>0 && burst_time[i]<burst_time[smallest])
                smallest = i;
        }
        printf("p[%d]\t|\t%d\t |\t%d\n",smallest+1,time+burst_time[smallest]-at[smallest],time-at[smallest]);
        sumt += time + burst_time[smallest] - at[smallest];
        sumw += time - at[smallest];
        time += burst_time[smallest];
        burst_time[smallest]=0;
    }
    printf("\n\n Average waiting time = %f",sumw*1.0/n);
    printf("\n\n Average turnaround time = %f",sumt*1.0/n);
    return 0;
}