#include <stdio.h>

int main(){
    printf("Hola mundo \n");
    int a = 10;
    int *puntero = &a;

    printf("%p \n", puntero);
    printf("%p \n", &a);
    printf("%d \n", *puntero);
    printf("%p \n", &puntero);
    printf("%zu \n", sizeof(a));

    return 0;
}