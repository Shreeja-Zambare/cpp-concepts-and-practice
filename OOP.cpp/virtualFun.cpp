#include <iostream> 
using namespace std; 
// Base class 
class Shape 
{ 
public: 
// Virtual function 
virtual void area() 
{ 
cout << "Area of generic shape is unknown." << endl; 
} 
}; 
// Derived class: Rectangle 
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
// Overriding virtual function 
void area() override 
{ 
cout << "Area of rectangle = " << length * width << endl; 
} 
}; 
// Derived class: Circle 
class Circle : public Shape 
{ 
private: 
float radius; 
public: 
Circle(float r) 
{ 
radius = r; 
} 
// Overriding virtual function 
void area() override 
{ 
cout << "Area of circle = " << 3.1416 * radius * radius << endl; 
} 
}; 
// Main function 
int main() 
{ 
Shape *s1, *s2; // Base class pointers 
Rectangle rect(10, 5); 
Circle circ(7); 
// Assign derived objects to base class pointers 
s1 = &rect; 
s2 = &circ; 
cout << "--- Virtual Function Demonstration ---\n"; 
s1->area(); // Calls Rectangle's area() 
s2->area(); // Calls Circle's area() 
return 0; 
}
