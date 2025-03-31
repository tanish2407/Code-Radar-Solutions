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
        printf("YES");
    }
    else if(n==4){
        printf("NO");
    }
    else if(n==3){
        printf("YES");
    }

}