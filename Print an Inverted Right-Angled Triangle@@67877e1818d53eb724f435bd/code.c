#include <stdio.h>


int main() {
    int n=10;
    for(i=n;i>=n;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}