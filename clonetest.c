#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
    printf(1, "Test userspace program\n");
    clone((void (*)(void *, void *)) 0, (void *)0, (void *)0, (void *)0);
    exit();
}