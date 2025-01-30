#include <stdio.h>
int main() {
    int a,b;
    char oper;
    scanf("%d %d",&a,&b);
    printf("enter the operator:");
    scanf("%c",&oper);
    switch(oper){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            
            printf("%d",a/b);
            break;
        default:
            printf("Error");
    }

    return 0;
}