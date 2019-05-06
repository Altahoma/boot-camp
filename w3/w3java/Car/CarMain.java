public class CarMain {
    public static void main(String[] args) throws OutOfFuelException, ToMuchFuelException {
        Car car = new Car();
        
        System.out.println("Model: " + car.getModel());
        System.out.println("Location: " + car.getLocation());
        System.out.println("Fuel amount: " + car.getFuelAmount());
        System.out.println("Fuel capacity: " + car.getFuelCapacity());
        System.out.println("Fuel consumption: " + car.getFuelConsumption());
        
        System.out.println();
        car.refill(33);
        System.out.println("Fuel amount: " + car.getFuelAmount());
        car.refill(27);
        System.out.println("Fuel amount: " + car.getFuelAmount());
        
        System.out.println();
        car.drive(new Point(5, 11));
        System.out.println("Fuel amount: " + car.getFuelAmount());
        System.out.println("Location: " + car.getLocation());
        
        System.out.println();
        car.drive(8, 16);
        System.out.println("Fuel amount: " + car.getFuelAmount());
        System.out.println("Location: " + car.getLocation());
        
        System.out.println();
        car.refill(1);
        car.drive(78, 61);
        System.out.println("Fuel amount: " + car.getFuelAmount());
        System.out.println("Location: " + car.getLocation());
        
        // car.refill(100);
        System.out.println(car);
    }
}