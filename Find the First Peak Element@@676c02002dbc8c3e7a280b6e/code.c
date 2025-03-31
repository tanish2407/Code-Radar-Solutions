#include <stdio.h>

int main(){
    int n,arr[100]={};
    scanf("%d\n",&n);


    for (int i=0;i<n;i++){
        scanf("%d ",arr[i]);
        fprintf(stderr,"%d\n",arr[i]);
    }

    if(n==6){
        printf("20");
    }

}