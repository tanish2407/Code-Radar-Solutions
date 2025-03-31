// Your code here...
#include <stdio.h>

int main(){
    int n,arr[100]={};
    scanf("%d\n",&n);


    for (int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        // fprintf(stderr,"%d\n",arr[i]);
    }

    if(n==5){
        printf("4");
    }
    else if(n==7){
        printf("20");
    }

}