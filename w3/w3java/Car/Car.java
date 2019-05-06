public class Car {
    private double fuelAmount;
    private double fuelCapacity;
    private double fuelConsumption;
    private Point location;
    private String model;
    
    public Car(double capacity, double consumption, Point location, String model) {
        this.fuelAmount = 0;
        this.fuelCapacity = capacity;
        this.fuelConsumption = consumption;
        this.location = location;
        this.model = model;
    }
    
    public Car() {
        this.fuelAmount = 0;
        this.fuelCapacity = 60;
        this.fuelConsumption = 0.6;
        this.location = new Point();
        this.model = "Mercedes";
    }
    
    public double getFuelAmount() {
        return this.fuelAmount;
    }
    
    public double getFuelCapacity() {
        return this.fuelCapacity;
    }
    
    public double getFuelConsumption() {
        return this.fuelConsumption;
    }
    
    public Point getLocation() {
        return this.location;
    }
    
    public String getModel() {
        return this.model;
    }
    
    public void drive(Point destination) throws OutOfFuelException {
        double fuelNeeded = location.distance(destination) * this.fuelConsumption;
        
        if ( fuelNeeded > this.fuelAmount ) {
            throw new OutOfFuelException();
        }
        
        this.fuelAmount -= fuelNeeded;
        this.location = destination;
    }
    
    public void drive(double x, double y) throws OutOfFuelException {
        double fuelNeeded = location.distance(new Point(x, y)) * fuelConsumption;
        
        if ( fuelNeeded > this.fuelAmount ) {
            throw new OutOfFuelException();
        }
        
        this.fuelAmount -= fuelNeeded;
        this.location = new Point(x, y);
    }
    
    public void refill(double fuel) throws OutOfFuelException, ToMuchFuelException {
        if ( fuel <= 0 ) {
            throw new OutOfFuelException();
        }
        
        if ( fuel > this.fuelCapacity - this.fuelAmount ) {
            throw new ToMuchFuelException();
        }
        
        this.fuelAmount += fuel;
    }
    
    public String toString() {
        return this.model + " " + "[Amount fuel: " + this.fuelAmount + "/" + this.fuelCapacity + "]" + " " + "[Location: " + this.location + "]";
    }
}