public class UnitMain {
    public static void main(String[] args) throws UnitIsDeadException {
        Unit barbarian = new Unit("Barbarian", 200, 20);
        Unit knight = new Unit("Knight", 180, 25);
        
        System.out.println(barbarian);
        System.out.println(knight);
        
        barbarian.attack(knight);
        
        System.out.println(barbarian);
        System.out.println(knight);
        
        System.out.println();
        System.out.println(knight.getDamage());
        System.out.println(knight.getHitPoints());
        System.out.println(knight.getHitPointsLimit());
        
        System.out.println();
        knight.addHitPoints(19);
        System.out.println(knight);
        
        System.out.println();
        knight.addHitPoints(20);
        System.out.println(knight);
        
        System.out.println();
        knight.takeDamage(184);
        System.out.println(knight);
        
        // knight.addHitPoints(50);
    }
}