public class Gun {
    private int amount;
    private int capacity;
    private boolean isReady;
    private String model;
    private int totalShots;
    
    public Gun(String model, int capacity) {
        this.amount = 0;
        this.capacity = capacity;
        this.isReady = false;
        this.model = model;
        this.totalShots = 0;
    }
    
    public Gun() {
        this.amount = 0;
        this.capacity = 8;
        this.isReady = false;
        this.model = "Beretta";
        this.totalShots = 0;
    }
    
    public int getAmount() {
        return this.amount;
    }
    
    public int getCapacity() {
        return this.capacity;
    }
    
    public boolean ready() {
        return this.isReady;
    }
    
    public String getModel() {
        return this.model;
    }
    
    public int getTotalShots() {
        return this.totalShots;
    }
    
    public void prepare() {
        this.isReady = !this.isReady;
    }
    
    public void reload() {
        this.amount = this.capacity;
    }
    
    public void shoot() throws OutOfRoundsException, NotReadyException {
        if ( !ready() ) {
            throw new NotReadyException();
        }
        if ( this.amount == 0 ) {
            isReady = false;
            throw new OutOfRoundsException();
        }
        
        this.amount -= 1;
        this.totalShots += 1;
        System.out.println("Bang!");
    }
    
    public String toString() {
        return this.model + " " + "[Ready: " + this.isReady + "]" + " " + "[Amount: " + this.amount + "/" + this.capacity + "]" + " " + "[Total shots: " + this.totalShots + "]";
    }
}