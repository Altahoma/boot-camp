public class GunMain {
    public static void main(String[] args) throws OutOfRoundsException, NotReadyException {
        Gun gun = new Gun();
        Gun desertEagle = new Gun("Desert eagle", 7);
        
        System.out.println("Amount: " + gun.getAmount());
        System.out.println("Capacity: " + gun.getCapacity());
        System.out.println("Ready: " + gun.ready());
        System.out.println("Model: " + gun.getModel());
        System.out.println("Total shots: " + gun.getTotalShots());
        
        System.out.println();
        
        // System.out.println("Amount: " + desertEagle.getAmount());
        // System.out.println("Capacity: " + desertEagle.getCapacity());
        // System.out.println("Ready: " + desertEagle.ready());
        // System.out.println("Model: " + desertEagle.getModel());
        // System.out.println("Total shots: " + desertEagle.getTotalShots());
        
        gun.prepare();
        System.out.println(gun);
        
        gun.reload();
        System.out.println(gun);
        
        gun.shoot();
        System.out.println(gun);
        gun.shoot();
        gun.shoot();
        gun.shoot();
        gun.shoot();
        gun.shoot();
        gun.shoot();
        System.out.println(gun);
        gun.shoot();
        System.out.println(gun);
        
        System.out.println();
        System.out.println(desertEagle);
        desertEagle.shoot();
    }
}