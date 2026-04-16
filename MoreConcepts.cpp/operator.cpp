#include <iostream>
using namespace std;

class Test 
{ 
private: 
    int num; 

public: 
    Test() : num(8) {}

    // Correct prefix ++ operator
    Test& operator++() { 
        num = num + 2; 
        return *this; 
    }

    void Print() { 
        cout << "The Count is: " << num; 
    } 
}; 

int main() 
{ 
    Test tt; 
    ++tt; 
    tt.Print(); 
    return 0; 
}