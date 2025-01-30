#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && c>a){
        if(a>c)
            printf("%d",a);
        else
            printf("%d",c);
    }
    else{
        printf("%d",b);
    }
    printf("%s", welcome());
    return 0;
}