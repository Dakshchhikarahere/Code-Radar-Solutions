#include <stdio.h>
#include <ctype.h>

int main(){
    char a;
    scanf("%c",&a);
    if (isalpha(a)){
        if (a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
            printf("Vowel\n");
        }
        else{
            printf("Consonant\n");
        }
    }
    else if (isdigit(a)){
        printf("Digit\n");
    }
    else{
        printf("Special Character");
    }
}