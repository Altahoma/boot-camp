public class Complex implements Cloneable {
    private double real;
    private double imaginary;
    
    public Complex(double real, double imaginary) {
        this.real = real;
        this.imaginary = imaginary;
    }
    
    public Complex() {
        this.real = 0.0;
        this.imaginary = 0.0;
    }
    
    public double getReal() {
        return this.real;
    }
    
    public double getImaginary() {
        return this.imaginary;
    }
    
    public boolean equals(Complex other) {
        return this.real == other.real && this.imaginary == other.imaginary;
    }
    
    public Complex sum(Complex other) {
        return new Complex(this.real + other.real, this.imaginary + other.imaginary);
    }
    
    public Complex diff(Complex other) {
        return new Complex(this.real - other.real, this.imaginary - other.imaginary);
    }
    
    public Complex prod(Complex other) {
        return new Complex(this.real * other.real - this.imaginary * other.imaginary, this.real * other.imaginary + other.real * this.imaginary);
}
    
    public String toString() {
        if ( this.imaginary < 0 ) {
            return this.real + "" + this.imaginary + "i";
        }
        return this.real + "+" + this.imaginary + "i";
    }
    
    public Complex clone() throws CloneNotSupportedException {
        return (Complex) super.clone();
    }
}