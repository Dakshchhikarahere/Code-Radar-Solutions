#include <stdio.h>

int main() {
    int SP,CP;
    scanf("%d %d",&CP,&SP);
    if (CP>SP){
        printf("Loss");
    }
    else{
        printf("Profit");
    }
}