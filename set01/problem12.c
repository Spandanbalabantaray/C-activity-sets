#include <stdio.h>

struct _complex {
    float real, imaginary;
};

typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main() {
    int n;
    n = get_n();
    Complex numbers[n];
    input_n_complex(n, numbers);
    Complex sum = add_n_complex(n, numbers);
    output(n, numbers, sum);
    return 0;
}

int get_n() {
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    return n;
}

Complex input_complex() {
    Complex num;
    printf("Real part: ");
    scanf("%f", &num.real);
    printf("Imaginary part: ");
    scanf("%f", &num.imaginary);
    return num;
}

void input_n_complex(int n, Complex c[n]) {
    printf("Enter %d complex numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Complex number %d:\n", i + 1);
        c[i] = input_complex();
    }
}

Complex add(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

Complex add_n_complex(int n, Complex c[n]) {
    Complex sum = {0, 0}; // Initialize sum to 0
    for (int i = 0; i < n; i++) {
        sum = add(sum, c[i]);
    }
    return sum;
}

void output(int n, Complex c[n], Complex result) {
    printf("Sum of the %d complex numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%.2f + %.2fi\n", c[i].real, c[i].imaginary);
    }
    printf("is: %.2f + %.2fi\n", result.real, result.imaginary);
}
