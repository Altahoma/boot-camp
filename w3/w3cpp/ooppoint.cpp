#include <iostream>

template <typename T>
class Point {
private:
    T x, y;
    
public:
    Point() {
        this->x = 0;
        this->y = 0;
    }
    
    Point(T x, T y) {
        this->x = x;
        this->y = y;
    }
    
    T getX() const {
        return this->x;
    }
    
    T getY() const {
        return this->y;
    }
    
    void print() {
        std::cout << "(" << this->x << ", " << this->y << ")" << std::endl;
    }
};

int main() {
    Point<float> *p1 = new Point<float>(2.2, 3.5);
    Point<double> *p2 = new Point<double>(4.9, 9.1);
    Point<int> *p3 = new Point<int>(5, -8);
    
    p1->print();
    p2->print();
    p3->print();
    
    delete p1;
    delete p2;
    delete p3;
    
    return 0;
}
