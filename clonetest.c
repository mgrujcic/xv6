#include "types.h"
#include "stat.h"
#include "user.h"

void testFunction(void *arg1, void *arg2){
    int sum = 0;
    for(int i=0; i<100; i++)
        sum+=i;
}

int main(int argc, char *argv[]){
    printf(1, "Test userspace program\n");
    clone(testFunction, (void *)0, (void *)0, (void *)0);
    exit();
}