#include "types.h"
#include "stat.h"
#include "user.h"
int atest;
int main(int argc, char *argv[]){
    /*int *nullref = (int*) (argc/100);
    printf(1, "Dereference null: %d %p\n", *nullref, nullref);
    */
    int btest = 3;
    printf(1, "Addresses %p %p\n", &atest, &btest);
    mprotect((void *) main, 1);
    printf(1, "Trying to write over main after calling mprotect");
    memset((void *) main, 0x90, 30);
    exit();
}