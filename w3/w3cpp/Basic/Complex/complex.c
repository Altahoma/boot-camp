#include <stdio.h>
#include <math.h>

typedef struct {
    double re;
    double im;
} Complex;

void complexIncrement(Complex *this, Complex other) {
    this->re += other.re;
    this->im += other.im;
}

void complexDecrement(Complex *this, Complex other) {
    this->re -= other.re;
    this->im -= other.im;
}

void complexMultiply(Complex *this, Complex other) {
    Complex c;
    
    c.re = this->re * other.re - this->im * other.im;
    c.im = this->re * other.im + this->im * other.re;
    this->re = c.re;
    this->im = c.im;
}

Complex complexSum(Complex a, Complex b) {
    Complex c = a;
    
    complexIncrement(&c, b);
    return c;
}

Complex complexDiff(Complex a, Complex b) {
    Complex c = a;
    
    complexDecrement(&c, b);
    return c;
}

Complex complexProduct(Complex a, Complex b) {
    Complex c = a;
    
    complexMultiply(&c, b);
    return c;
}

int complexEqual(Complex a, Complex b) {
    return a.re == b.re && a.im == b.im;
}

double complexAbs(Complex this) {
    return hypot(this.re, this.im);
}

void complexPrint(Complex this) {
    if ( this.im < 0 ) {
        printf("%g%gi", this.re, this.im);
    } else {
        printf("%g+%gi", this.re, this.im);
    }
}
