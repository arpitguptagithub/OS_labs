/* add.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a add syscall that adds two values and returns the result.
 *
 */

#include "syscall.h"

int main() {
    int result;

    int i,j;
 //   result = Add(42, 23);
    PrintString("Hello\n");
    Exec("add2");
    Sleep(5);
    while(1){
        for(i=0;i<100000;i++){};
        PrintString("IN add\n");
    }
    //Halt();
    /* not reached */
}
