#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
	int pid,pid1,pid2;
	pid=fork();
	if(pid==-1)
	{
		printf("error in process creation");
		exit(1);	
	}
	if(pid!=0)
	{
		pid1=getpid();
		printf("the parent process id is %d",pid);
	}
	else
	{
		pid2=getpid();
		printf("\nthe child process id is %d",pid2);
	}
}
