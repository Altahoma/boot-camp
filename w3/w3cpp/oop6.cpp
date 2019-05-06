class Engine {
private:
    bool isRunning;
    
public:
    Engine() {
        this->isRunning = false;
    }
    
    bool running() {
        return this->isRunning;
    }
    
    void start() {
        this->isRunning = true;
    }
    
    void stop() {
        this->isRunning = false;
    }
};

class Car {
private:
    Engine *engine;
    
public:
    Car() {
        this->engine = new Engine();
    }
    
    ~Car() {
        delete this->engine;
    }
    
    void move(double distance) {
        if ( !this->engine->running() ) {
            this->engine->start();
        }
        
        
        this->engine->stop();
    }
}