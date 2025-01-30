#include <stdio.h>
int main() {
    char b,vowel,Consonant,Special,Digit;
    scanf("%c",&b);
    if(b>='A'&& b<='Z'){
        b = b+32;
    }
    if(b>='0'&&b<='9'){
        printf("Digit");
    }
    else if(b>='a'&&b<='z'){
        if(b=='a' ||b=='i'||b=='o'||b=='e'||b=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("Special Character");
    }
    return 0;
}