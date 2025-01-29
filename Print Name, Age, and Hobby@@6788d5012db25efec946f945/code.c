#include <stdio.h>
int main() {
    char a,b;
    int c;
    scanf("%c %d",&a,&c);
    scanf("%c",&c);
    printf("Name: %c\n",a );
    printf("Age: %d\n",c);
    printf("Hobby: %c",b);
    return 0;
}