#include<stdio.h>

main(){

char[] a ;
char b = 'b';
show_bytes(&a,2);

}

void show_bytes(char *start, int length){
	int i;
	for(i=0;i<length;i++){
		printf("%p\t0x%.2x\n",start+i,*(start+i));
		printf("\n");
	}
}
