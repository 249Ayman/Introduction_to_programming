#include <stdio.h>
#include <string.h>

int main(void){
    printf("what's your name\n");
    char a[50];
    fgets(a,50,stdin);

    int n= strlen(a);
    printf("%i \n",n);
};
