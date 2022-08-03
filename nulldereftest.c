#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
    int *nullref = (int*) (argc/100);
    printf(1, "Dereference null: %d %p\n", *nullref, nullref);
    exit();
}