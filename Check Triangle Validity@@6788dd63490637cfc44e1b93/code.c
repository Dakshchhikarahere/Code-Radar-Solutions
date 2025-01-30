#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x=a+b;
    int y=a+c;
    int z=b+c;
    if(x>c){
        printf("Valid");
    }
    else if(y>b){
        printf("Valid");
    }
    else if(z>a){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}