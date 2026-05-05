#include <iostream> 
using namespace std; 
// ----------------- Compile-Time Polymorphism (Function Overloading) ----------------- 
class Calculator 
{ 
public: 
// Function to add two integers 
int add(int a, int b) 
{ 
return a + b; 
} 
// Function to add three integers (overloading) 
int add(int a, int b, int c) 
{ 
return a + b + c; 
} 
// Function to add two floating-point numbers (overloading) 
float add(float a, float b) 
{ 
return a + b; 
} 
}; 
// ----------------- Run-Time Polymorphism (Function Overriding) ----------------- 
class Shape 
{ 
public: 
// Virtual function for area 
virtual void area() 
{ 
cout << "Area of generic shape" << endl; 
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
// Overriding the area function 
void area() override 
{ 
cout << "Area of rectangle = " << length * width << endl; 
} 
}; 
class Circle : public Shape 
{ 
private: 
float radius; 
public: 
Circle(float r) 
{ 
radius = r; 
} 
// Overriding the area function 
void area() override 
{ 
cout << "Area of circle = " << 3.1416 * radius * radius << endl; 
} 
}; 
// ----------------- Main Function ----------------- 
int main() 
{ 
// Compile-time polymorphism demonstration 
Calculator calc; 
cout << "--- Compile-Time Polymorphism (Function Overloading) ---\n"; 
cout << "Sum of 2 integers: " << calc.add(10, 20) << endl; 
cout << "Sum of 3 integers: " << calc.add(5, 10, 15) << endl; 
cout << "Sum of 2 floats: " << calc.add(2.5f, 3.5f) << endl; 
// Run-time polymorphism demonstration 
Shape *s1, *s2; 
Rectangle rect(10, 5); 
Circle circ(7); 
s1 = &rect; // Base class pointer pointing to derived class object 
s2 = &circ; 
cout << "\n--- Run-Time Polymorphism (Function Overriding) ---\n"; 
s1->area(); // Calls Rectangle's area() 
s2->area(); // Calls Circle's area() 
return 0; 
}
