#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handler(int i) {
	printf("Signal recieved is : %d",i);
}

int main() {
	signal(30, handler);
	while(1) {
		sleep(1);
	}
}
