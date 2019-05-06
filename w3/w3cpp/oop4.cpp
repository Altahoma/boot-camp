class Car {
private:
    double maxFeul;
    double currentFuel;
    double consumption;
    char* model;
    
public:
    Car() {
        std::cout << "constructing car" << std::endl;
        
        this->maxFeul = 100;
        this->currentFuel = 100;
        this->consumption = 0.18;
        this->model = new char[50];
    }
    
    ~Car() {
        std::cout << "destructing car" << std::endl;
        delete this->model;
    }
    
    double getMaxFuel() const {
        return this->maxFeul;
    }
    
    double getCurrentFuel() const {
        return this->currentFuel;
    }
    
    double getConsumption() const {
        return this->consumption;
    }
    
    void setMaxFuel(double maxFeul) {
        this->maxFeul = maxFeul;
    }
    
    void setCurrentFuel(double currentFuel) {
        if ( currentFuel > this->maxFeul ) {
            currentFuel = this->maxFeul;
        } else if ( currentFuel < 0 ) {
            currentFuel = 0;
        }
        
        this->currentFuel = currentFuel;
    }
    
    void setConsumption(double consumption) {
        this->consumption = consumption;
    }
}