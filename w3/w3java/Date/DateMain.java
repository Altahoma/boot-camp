public class DateMain {
    public static void main(String[] args) throws InvalidDateException {
        Date date = new Date(18, 01, 1997);
        Date date2 = new Date();
        
        System.out.println(date.getDay());
        System.out.println(date.getMonth());
        System.out.println(date.getYear());
        
        System.out.println(date);
        System.out.println(date2);
    }
}