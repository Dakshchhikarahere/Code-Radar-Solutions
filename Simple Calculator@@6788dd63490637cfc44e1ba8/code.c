#include <stdio.h>
int main() {
    float a, b;
    char c;
    scanf("%f %f %c", &a, &b, &c);
    switch (c) {
        case '+':
            printf("%.2f", a + b);
            break;
        case '-':
            printf("%.2f", a - b);
            break;
        case '*':
            printf("%.2f", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%.2f", a / b);
            else
                printf("Error: Division by zero");
            break;
    }
    return 0;
}
