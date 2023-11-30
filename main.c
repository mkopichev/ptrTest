#include <stdio.h>

void valuePass(int i) {
    i += 1;
    printf("Var i inside valuePass() has address %p \n", &i);
}

void ptrPass(int *i) {
    *i += 1;
    printf("Var i inside ptrPass() has address %p \n", i);
}

int main(void) {

    int i = 10;
    int *iPtr = &i;

    printf("Var i has initial value %d and address %p \n\n", i, iPtr);
    valuePass(i);
    printf("Var i after valuePass() has value %d and address %p \n\n", i, iPtr);
    ptrPass(iPtr);
    printf("Var i after ptrPass() has value %d and address %p \n\n", i, iPtr);

    return 0;
}