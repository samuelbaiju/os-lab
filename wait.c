#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
	if(fork()==0)
	{
		printf("hc:hello from child\n");
		}
		else
		{
			printf("hp:hello from parent\n");
			wait(NULL);
			printf("CT:child has terminated\n");
		}
		printf("bye\n");
		return 0;
		
}
