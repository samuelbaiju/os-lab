#include<stdio.h>
void main()
{
	int n,head,max,diff,temp,temp1=0,temp2=0,seek=0;
	int i,j,k;
	printf("enter the max range of the disk");
scanf("%d",&max);
printf("enter the initial head position");
scanf("%d",&head);
printf("enter the size of queue request");
scanf("%d",&n);
int queue[n+2],queue1[n+2],queue2[n+2];
printf("enter the queue of disk positions to be read\n");
for(i=1;i<=n;i++)
{
	scanf("%d",&temp);
if(temp>=head)
{
	queue1[temp1]=temp;
	temp++;
}
else
{
	queue2[temp2]=temp;
temp2++;
}
}
for(i=0;i<temp1-1;i++)
{
	for(j=0;j<temp1-i-1;j++)
	{
		if(queue1[j]>queue1[j+1])
		{
			temp=queue1[j];
			queue1[j]=queue1[j+1];
			queue1[j+1]=temp;
		}
	}	
}
for(i=0;i<temp2-1;i++)
{
	for(j=0;j<temp2-i-1;j++)
	{
		if(queue2[j]>queue2[j+1])
		{
			temp=queue2[j];
			queue2[j]=queue2[j+1];
			queue2[j+1]=temp;
		}
	}	
}
queue[0]=head;
for(i=1,j=0;j<temp1;i++,j++)
queue[i]=queue1[j];
queue[i]=max;
for(i=temp1+2,j=0;j<temp2;i++,j++)
queue[i]=queue2[j];
for(i=0;i<n+1;i++)
{
	diff=abs(queue[i+1]-queue[i]);
	seektime+=diff;
	printf("%d->",queue[i]);
}
printf("%d",queue[n+1]);
printf("\n total seek time=%d",seektime);
printf("\naverage seek time=%f",(float)seektime/n);
}
