#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    switch(a){
        case 'R':
            printf("Stop");
            break;
        case 'G':
            printf("G0");
            break;
        case 'Y':
            printf("Slow Down");
            break;
    }
  
    return 0;
}