#include<unistd.h>
#include<stdio.h>
main(){
	int c =0;
	printf("i am just the stupid childless parent :%d \n",getpid());
	if((c = fork())==0){
		freopen("a.txt","w",stdout);
		printf("I am the child and my pid is :%d \n",getpid());
		

	} else{
		sleep(2);
		printf(" parents rule ! value of pid :%d \n",c);
		
	}
					
	printf("anjaan hoon main %d \n",getpid());



}
