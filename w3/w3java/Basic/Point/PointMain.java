public class PointMain {
    public static void main(String[] args) throws CloneNotSupportedException {
        Point a = new Point(2, 7);
        Point b = new Point(6, 8);
        Point c = b.clone();
        Point d = new Point();

        System.out.println("b:" + b);
        System.out.println("c:" + c);
        System.out.println("d:" + d);

        c.setX(42);

        System.out.println("b:" + b);
        System.out.println("c:" + c);
        
        System.out.println(a.equals(b));
        System.out.println(a.toString());
        System.out.println(a.distance(b));
    }
}
