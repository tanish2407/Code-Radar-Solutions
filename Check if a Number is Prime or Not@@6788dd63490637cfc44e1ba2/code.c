#include <stdio.h>
int main() {
    int a,prime=1;
    scanf("%d",&a);
    if(a==0 || a==1){
        prime=0;
    }
    else{
        for(int i=2;i<a;i++){
            if(n%i==0){
            prime=0;}
        }
    }
    if(prime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    
    return 0;
}