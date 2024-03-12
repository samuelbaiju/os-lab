#include<stdio.h>  
#include<stdlib.h>  
#include<unistd.h>  
#include<sys/shm.h>  
int main()  
{  
int i;  
void *shared_memory;  
char str[100];  
int shmid;  
shmid=shmget((key_t)2366, 1024, 0666);  
printf("Key of shared memory is %d\n",shmid);  
void *shm=shmat(shmid,NULL,0); 
printf("Data read from shared memory is : %s\n",(char *)shm);  
} 
