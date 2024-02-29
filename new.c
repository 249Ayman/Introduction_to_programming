#include <stdio.h>
int main() {
    int a[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter your mark in the %i subject ", i);
        scanf("%i", &a[i]);
    }
    printf("marks in subject 1 is %i", a[0]);
}