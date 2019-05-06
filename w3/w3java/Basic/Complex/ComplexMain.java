public class ComplexMain {
    public static void main(String[] args) throws CloneNotSupportedException {
        Complex x = new Complex(2, 7);
        Complex y = new Complex(3, -8);
        Complex z = new Complex();
        Complex s = x.clone();
        
        System.out.println("x: " + x);
        System.out.println("y: " + y);
        System.out.println("z: " + z);
        System.out.println("s: " + s);
        
        System.out.println("getReal: " + x.getReal());
        System.out.println("getImaginary: " + x.getImaginary());
        
        System.out.println("equals: " + x.equals(y));
        System.out.println("equals: " + x.equals(s));
    }
}