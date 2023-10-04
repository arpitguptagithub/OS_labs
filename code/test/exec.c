/* exec.c
 *	Simple program to test the exec system call.
 */

#include "syscall.h"
#define stdin 0
#define stdout 1

int main() {
    int pid;int pid2;
    int i,j;

    PrintString("In exec start\n");
    pid = Exec("./add");
    pid2 = Exec("./ascii");
    PrintNum(pid);
    while(1) {
	    for(i=0;i<10000;i++) {
		    for(j=0;j<100;j++);
	    }
	    PrintString("In exec\n");
    }

}
