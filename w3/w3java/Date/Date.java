public class Date {
    private int day;
    private int month;
    private int year;
    
    private void validate(int day, int month, int year) throws InvalidDateException {
        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ) {
            days[1] = 29;
        }
        
        if ( month < 1 || month > 12 ) {
            throw new InvalidDateException();
        }
        
        if ( day < 1 || day > days[month-1] ) {
            throw new InvalidDateException();
        }
    }
    
    public Date(int day, int month, int year) throws InvalidDateException {
        validate(day, month, year);
        
        this.day = day;
        this.month = month;
        this.year = year;
    }
    
    public Date() throws InvalidDateException {
        this.day = 1;
        this.month = 1;
        this.year = 1970;
        
        validate(day, month, year);
    }
    
    public int getDay() {
        return this.day;
    }
    
    public int getMonth() {
        return this.month;
    }
    
    public int getYear() {
        return this.year;
    }
    
    public String toString() {
        return this.day + "." + this.month + "." + this.year;
    }
}