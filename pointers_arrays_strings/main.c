#include <stdio.h>

void reset_to_98(int *n); // prototype si pas de main.h

int main(void)
{
    int a = 42;
    printf("Avant reset : %d\n", a);
    reset_to_98(&a);
    printf("Après reset : %d\n", a);
    return 0;
}
