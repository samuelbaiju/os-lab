#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,seektime=0,diff;
printf("enter the size of the queue");
scanf("%d",&n);
int queue[n+1];
printf("enter the queue");
for(int i=1;i<=n;i++)
{
	scanf("%d",&queue[i]);
}
printf("enter the initial head position");
scanf("%d",&queue[0]);
printf("\nmovement of cylinders\n");
for(int i=0;i<n;i++)
{
	diff=abs(queue[i+1]-queue[i]);
	seektime+=diff;
	printf("%d->",queue[i]);
}
printf("%d",queue[n]);
printf("\n total seek time=%d",seektime);
printf("\naverage seek time=%f",(float)seektime/n);
}
