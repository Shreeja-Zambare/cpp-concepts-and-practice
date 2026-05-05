#include <iostream> 
#include <string> 
using namespace std; 
// Abstract class 
class Shape 
{ 
public: 
// Pure virtual function (makes this class abstract) 
virtual void area() = 0; 
// Another pure virtual function 
virtual void perimeter() = 0; 
}; 
// Derived class: Rectangle 
class Rectangle : public Shape 
{ 
private: 
float length, width; 
public: 
// Function to accept rectangle dimensions 
void getData() 
{ 
cout << "Enter length of rectangle: "; 
cin >> length; 
cout << "Enter width of rectangle: "; 
cin >> width; 
} 
// Override pure virtual function to calculate area 
void area() 
{ 
cout << "Area of rectangle = " << length * width << endl; 
} 
// Override pure virtual function to calculate perimeter 
void perimeter() 
{ 
cout << "Perimeter of rectangle = " << 2 * (length + width) << endl; 
} 
}; 
// Derived class: Circle 
class Circle : public Shape 
{ 
private: 
float radius; 
public: 
void getData() 
{ 
cout << "Enter radius of circle: "; 
cin >> radius; 
} 
void area() 
{ 
cout << "Area of circle = " << 3.1416 * radius * radius << endl; 
} 
void perimeter() 
{ 
cout << "Perimeter (Circumference) of circle = " << 2 * 3.1416 * radius << endl; 
} 
}; 
// Main function 
int main() 
{ 
Rectangle rect; 
Circle circ; 
cout << "--- Rectangle ---\n"; 
rect.getData(); 
rect.area(); 
rect.perimeter(); 
cout << "\n--- Circle ---\n"; 
circ.getData(); 
circ.area(); 
circ.perimeter(); 
return 0; 
}

