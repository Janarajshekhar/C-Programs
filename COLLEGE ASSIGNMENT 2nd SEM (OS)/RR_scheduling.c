#include<stdio.h>
int main()
{
    int n,quantum,i,time=0,done;
    int bt[10],rt[10],wt[10],tat[10];
    float total_wt=0,total_tat=0;
    printf("\n Enter number of processes : ");
    scanf("%d",&n);
    printf("\n Enter burst time for each processes : \n");
    for(i=0;i<n;i++)
    {
        printf("p[%d] : ",i+1);
        scanf("%d",&bt[i]);
        rt[i]=bt[i];
    }
    printf("\n Enter the quantum : ");
    scanf("%d",&quantum);
    do
    {
        done=1;
        for(i=0;i<n;i++)
        {
            if(rt[i]>0)
            {
                done=0;
                if(rt[i]>quantum)
                {
                    time += quantum;
                    rt[i] -= quantum;
                }
                else
                {
                    time += rt[i];
                    wt[i] = time-bt[i];
                    rt[i] = 0;
                }
            }
        }
    } while(!done);
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        total_wt += wt[i];
        total_tat += tat[i];
    }
    printf("\n Process\tBT\tWT\tTAT\n");
    for(i=0;i<n;i++)
    {
        printf(" p[%d]\t\t%d\t%d\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    printf("\n Average waiting time = %f",total_wt/n);
    printf("\n Average turn around time = %f",total_tat/n);
    return 0;
}