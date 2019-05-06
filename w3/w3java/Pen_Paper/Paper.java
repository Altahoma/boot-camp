public class Paper {
    private int maxSymbols;
    private int symbols;
    private StringBuffer content;
    
    public Paper(int maxSymbols) {
        this.maxSymbols = maxSymbols;
        this.symbols = 0;
        content = new StringBuffer();
    }
    
    public Paper() {
        this.maxSymbols = 4096;
        this.symbols = 0;
        content = new StringBuffer();
    }
    
    public int getMaxSymbols() {
        return this.maxSymbols;
    }
    
    public int getSymbols() {
        return this.symbols;
    }
    
    public void addContent(String message) throws OutOfSpaceException {
        int total = content.length() + message.length();
        
        if ( content.length() == this.maxSymbols ) {
            throw new OutOfSpaceException();
        }
        
        if ( total > this.maxSymbols ) {
            content.append(message.substring(0, this.maxSymbols-content.length()));
            return;
        }
        
        content.append(message);
    }
    
    public void show() {
        System.out.println(content);
    }
}