 #include<stdio.h>
 #include<sys/stat.h>
 int main()
 {
 	//pointer to stat struct
 	struct stat sfile;
 	//stat systemcall
 	stat("srepathy",&sfile);
 	//accessing st_mode(data member of stat struct)
 	printf("st_mode=%o",sfile.st_mode);
 	return 0;
 }
 
