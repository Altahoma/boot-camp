#include <iostream>
#include "Complex.h"

Complex::Complex(double real, double imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}

Complex::~Complex() {
    
}

double Complex::getReal() const {
    return this->real;
}

double Complex::getImaginary() const {
    return this->imaginary;
}

bool Complex::operator==(const Complex& other) const {
    return this->real == other.real && this->imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex& other) const {
    return this->real != other.real || this->imaginary != other.imaginary;
}

void Complex::operator+=(const Complex& other) {
    Complex(this->real = this->real + other.real, this->imaginary = this->imaginary + other.imaginary);
}

void Complex::operator-=(const Complex& other) {
    Complex(this->real = this->real - other.real, this->imaginary = this->imaginary - other.imaginary);
}

Complex Complex::operator+(const Complex& other) const {
    return Complex(this->real + other.real, this->imaginary + other.imaginary);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(this->real - other.real, this->imaginary - other.imaginary);
}

Complex Complex::operator*(const Complex& other) const {
    return Complex(this->real * other.real - this->imaginary * other.imaginary, this->real * other.imaginary + this->imaginary * other.real);
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    out << complex.getReal() << std::showpos << complex.getImaginary() << 'i' << std::noshowpos;
    return out;
}