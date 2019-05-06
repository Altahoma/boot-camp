#include <iostream>
#include "Pen.h"
#include "Paper.h"

int main() {
    Pen pen(100);
    Paper paper(25);
    
    // paper.addContent("Hello");
    
    pen.write(paper, "Hello, world!");
    paper.show();
    
    pen.write(paper, "1234567890");
    paper.show();
    
    pen.write(paper, "abcdefg");
    paper.show();
    
    return 0;
}
