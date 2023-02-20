#include <stdio.h>

int main()
{
    int a, b;
    printf("A=");
    scanf("%i", &a);
    printf("B=");
    scanf("%i", &b);
    if (a > b) {
        printf("A > B");
    }
    else {
        if (a == b) {
            printf("A = B");
        }
        else {
            printf("A < B");
        }
    }
    return 0;
}

