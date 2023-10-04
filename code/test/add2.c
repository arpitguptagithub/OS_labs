/* add.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a add syscall that adds two values and returns the result.
 *
 */

#include "syscall.h"

int main() {
    int i,j;

    while(1){
        for(i=0;i<100000;i++){};
        PrintString("IN add2\n");
    }
    //Halt();
    /* not reached */
}
