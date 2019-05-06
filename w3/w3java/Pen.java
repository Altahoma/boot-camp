public class Pen {
    private int inkAmount;
    private int inkCapacity;
    
    public Pen() {
        this.inkAmount = 1024;
        this.inkCapacity = 1024;
    }
    
    public Pen(int inkCapacity) {
        this.inkAmount = inkCapacity;
        this.inkCapacity = inkCapacity;
    }
    
    public int getInkAmount() {
        return inkAmount;
    }
    
    public int getInkCapacity() {
        return inkCapacity;
    }
    
    public void write(Paper paper, String message) throws OutOfInkException {
        if (  inkAmount == 0 ) {
            throw new OutOfInkException();
        }
        if ( message.length() > inkAmount ) {
            paper.addContent(message.substring(0, inkAmount));
            inkAmount = 0;
            return;
        }
        paper.addContent(message);
        inkAmount -= message.length();
    }
    
    public void refill() {
        inkAmount = inkCapacity;
    }
}