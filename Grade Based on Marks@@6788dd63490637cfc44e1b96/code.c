#include <stdio.h>
int main() {
    int n;
    scanf("5d")
    if(n>=90){
        printf("A");
    }
    else if(n>=80 && n<90)
    printf("B");
    else if(n>=70 && n<80)
    printf("C");
    else if(n>=60 && n<70)
    printf("D");
    else{
        printf("F");
    }
    return 0;
}