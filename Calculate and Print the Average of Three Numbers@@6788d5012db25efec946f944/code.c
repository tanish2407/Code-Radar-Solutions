#include <stdio.h>
int main() {
    int a,b,c;

    scanf("%d %d %d ",&a,&b,&c);
    float d=(a+b+c)/3.00;
    printf("Average: %.2f",d);
    return 0;
}