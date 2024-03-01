#include <stdio.h>

float input() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    return num;
}

float square_root(float n) {
    if (n == 0) return 0;
    
    float x = n;
    float y = 1;
    float epsilon = 0.00001;
    
    while (x - y > epsilon) {
        x = (x + y) / 2;
        y = n / x;
    }
    
    return x;
}

void output(float n, float sqrroot) {
    printf("Square root of %.2f is %.5f\n", n, sqrroot);
}

int main() {
    float num, sqrroot;
    num = input();
    sqrroot = square_root(num);
    output(num, sqrroot); 
    return 0;
}
