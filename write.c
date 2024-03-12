#include<stdio.h>  
 #include<stdlib.h>  
 #include<unistd.h>  
 #include<sys/shm.h>  
   void main()  
    {   
     char str[100];  
     int shmid;  
     shmid=shmget((key_t)2366, 1024, 0666|IPC_CREAT);  
     printf("Key of shared memory is %d\n",shmid);  
    void *shm=shmat(shmid,NULL,0);   
     printf("Process attached at %p\n",shm);  
     printf("Enter some data to write to shared memory\n");  
     scanf("%s",str);
     strcpy(shm,str);  
     printf("You wrote : %s\n",(char *)shm);  
    }  
