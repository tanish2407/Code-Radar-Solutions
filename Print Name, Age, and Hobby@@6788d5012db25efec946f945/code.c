#include <stdio.h>
int main() {
    char a[50],b[50];
    int c;
    scanf("%s %d",&a,&c);
    scanf("%s",&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",c);
    printf("Hobby: %s",b);
    return 0;
}