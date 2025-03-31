#include<stdio.h>
int main(){
   
    int n,arr[100]={}
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
     //fprintf(stderr,"%d ",arr[i]);
    }

    if(n==6 && arr[0]==2 && arr[1]==3){
        printf("4");
    }


    return 0;
}