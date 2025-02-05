#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i==0 && j!=0) || (i!=0 && j==0)){
                printf(" %d",0);
            }
            else{
                printf("%d",1);
            }
        }
        printf("\n");
    }

    return 0;
}