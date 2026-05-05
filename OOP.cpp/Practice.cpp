#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    Person() {
        name = "Unknown";
    }

    Person(string n) {
        name = n;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
    }
};


class Student : public Person {
protected:
    int marks;

public:
    Student() : Person() {
        marks = 0;
    }

    Student(string n, int m) : Person(n) {
        marks = m;
    }

    void displayStudent() {
        displayPerson();
        cout << "Marks: " << marks << endl;
    }
};


class Result : public Student {
private:
    float percentage;

public:
    Result(string n, int m) : Student(n, m) {
        percentage = m / 5.0;
    }

    void showResult() {
        displayStudent();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};


class Counter {
private:
    static int count;

public:
    Counter() {
        count++;
    }

    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

int Counter::count = 0;


class Calculator {
public:
    inline int add(int a, int b) {
        return a + b;
    }
};


class Box {
private:
    int length;

public:
    Box() {
        length = 10;
    }

    friend void showLength(Box b);
};

void showLength(Box b) {
    cout << "Length (friend): " << b.length << endl;
}

class Complex {
private:
    int real, imag;

public:
    Complex() {
        real = imag = 0;
    }

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    friend istream& operator>>(istream &in, Complex &c) {
        cout << "Enter real and imag: ";
        in >> c.real >> c.imag;
        return in;
    }

    friend ostream& operator<<(ostream &out, Complex c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape\n";
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle\n";
    }
};


void divide() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0)
            throw b;
        cout << "Division: " << a / b << endl;
    }
    catch (...) {
        cout << "Error: Division by zero!\n";
    }
}

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {

    Result r("Isha", 450);
    r.showResult();

    Counter c1, c2, c3;
    Counter::showCount();

    Calculator calc;
    cout << "Sum: " << calc.add(10, 20) << endl;

    Box b;
    showLength(b);

    Complex c1_obj, c2_obj, sum;
    cin >> c1_obj >> c2_obj;
    sum = c1_obj + c2_obj;
    cout << "Sum: " << sum << endl;

    Shape *s;
    Circle cir;
    s = &cir;
    s->draw();

    divide();

    int x = 5, y = 10;
    swapValues(x, y);
    cout << "Swapped: " << x << " " << y << endl;

    return 0;
}