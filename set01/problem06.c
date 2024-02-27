#include <stdio.h>

int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main() {
    int a, b, c, largest;
    a = input();
    b = input();
    c = input();
    compare(a, b, c, &largest);
    output(a, b, c, largest);
    return 0;
}

int input() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

void compare(int a, int b, int c, int *largest) {
    if (a >= b && a >= c) {
        *largest = a;
    } else if (b >= a && b >= c) {
        *largest = b;
    } else {
        *largest = c;
    }
}

void output(int a, int b, int c, int largest) {
    printf("The numbers are: %d, %d, %d\n", a, b, c);
    printf("The largest number is: %d\n", largest);
}
