#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
struct dirent*dptr;
int main(int argc,char*argv[])
{
	char buff[100];
	DIR*dirp;
	printf("enter the directory name");
	scanf("%s",buff);
	if((dirp=opendir(buff))==NULL)
	{
		printf("the given directory does not exist");
		exit(1);
	}
	while(dptr=readdir(dirp))
	{
		printf("%s\n",dptr->d_name);
	}
	closedir(dirp);
}
