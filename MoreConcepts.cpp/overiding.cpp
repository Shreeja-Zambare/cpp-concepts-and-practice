#include <iostream> 
using namespace std; 
class Shape 
{ 
public: 

virtual void display() 
{ 
cout << "This is a generic shape." << endl; 
} 
}; 

class Rectangle : public Shape 
{ 
private: 
float length, width; 
public: 
Rectangle(float l, float w) 
{ 
length = l; 
width = w; 
} 
void display() override 
{ 
cout << "This is a rectangle with length " << length 
<< " and width " << width << "." << endl; 
} 
float area() 
{ 
return length * width; 
} 
float operator+(Rectangle r) 
{ 
return this->area() + r.area(); 
} 
}; 
int main() 
{ 
Rectangle rect1(5, 10); 
Rectangle rect2(3, 4); 
float totalArea = rect1 + rect2; // Calls overloaded + operator 
cout << "--- Operator Overloading ---" << endl; 
cout << "Area of rect1: " << rect1.area() << endl; 
cout << "Area of rect2: " << rect2.area() << endl; 
cout << "Total area (rect1 + rect2) using overloaded +: " << totalArea << endl; 
Shape *s; 
Rectangle rect3(7, 2); 
s = &rect3; 
cout << "\n--- Function Overriding ---" << endl; 
s->display(); 
return 0;}
