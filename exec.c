#include<unistd.h>
int main()
{
	char* binaryPath="/bin/ls";
	char* arg1="-1";
	char* arg2="/home/mca/sam";
	execl(binaryPath,binaryPath,arg1,arg2,NULL);
	return 0;
}

