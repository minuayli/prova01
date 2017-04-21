#include <stdio.h>

int addizione(int a, int b);

int main() {
    int a = 7;
    int b = 19;

    
    printf("\n %d \n", addizione(a,b));
    return(0);

    
}

int addizione(int a, int b){

    int somma = a + b;

    return(somma);
}