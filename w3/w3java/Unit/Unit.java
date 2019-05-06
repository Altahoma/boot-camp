public class Unit {
    private int damage;
    private int hitPoints;
    private int hitPointsLimit;
    private String name;
    
    public void ensureIsAlive() throws UnitIsDeadException {
        if ( this.hitPoints == 0 ) {
            throw new UnitIsDeadException();
        }
    }
    
    public Unit(String name, int hp, int dmg) {
        this.damage = dmg;
        this.hitPoints = hp;
        this.hitPointsLimit = hp;
        this.name = name;
    }
    
    public int getDamage() {
        return this.damage;
    }
    
    public int getHitPoints() {
        return this.hitPoints;
    }
    
    public int getHitPointsLimit() {
        return this.hitPointsLimit;
    }
    
    public String getName() {
        return this.name;
    }
    
    public void addHitPoints(int hp) throws UnitIsDeadException {
        ensureIsAlive();
        
        if ( hp > this.hitPointsLimit - this.hitPoints ) {
            this.hitPoints = this.hitPointsLimit;
            return;
        }
        
        this.hitPoints += hp;
    }
    
    public void takeDamage(int dmg) throws UnitIsDeadException {
        ensureIsAlive();
        
        if ( dmg > this.hitPoints ) {
            this.hitPoints = 0;
            return;
        }
        
        this.hitPoints -= dmg;
    }
    
    public void attack(Unit enemy) throws UnitIsDeadException {
        enemy.takeDamage(this.damage);
        
        if ( enemy.getHitPoints() > 0 ) {
            counterAttack(enemy);
        }
    }
    
    public void counterAttack(Unit enemy) throws UnitIsDeadException {
        int dmg = enemy.getDamage() / 2;
        
        takeDamage(dmg);
    }
    
    public String toString() {
        return this.name + " " + "[HP: " + this.hitPoints + "/" + this.hitPointsLimit + "]" + " " + "[DMG: " + this.damage + "]";
    }
}