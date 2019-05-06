public class VectorMain {
    public static void main(String[] args) throws CloneNotSupportedException {
        Vector x = new Vector(2, 7);
        Vector y = new Vector(3, 8);
        Vector z = new Vector();
        Vector s = x.clone();
        
        System.out.println("x: " + x);
        System.out.println("y: " + y);
        System.out.println("z: " + z);
        System.out.println("s: " + s);
        
        System.out.println("getX: " + x.getX());
        System.out.println("getY: " + x.getY());
        
        y.setX(5);
        y.setY(55);
        System.out.println("y: " + y);
        
        System.out.println("len: " + x.len());
        System.out.println("equals: " + x.equals(y));
        System.out.println("equals: " + x.equals(s));
    }
}