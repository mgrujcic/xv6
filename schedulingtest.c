#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
    int n = 4;
    int original = getpid();
    for(int i = 1; i < n; i++){
        int res = fork();
        if(res == 0)
            break;
        if(res < 0)
            n--;
    }
    int thread = getpid();
    for(uint i = 0; i <= 1000000000; i++){
        if(i%100000000 == 0)
            printf(1, "[%d] : %d\n", thread, i);
    }
    if(getpid() != original)
        exit();
    for(int i = 1; i < n; i++){
        wait();
    }
    exit();



}