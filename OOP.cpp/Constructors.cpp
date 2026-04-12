#include <iostream>  
#include <string>
using namespace std; 

class Patient 
{ 
private: 
int patientId; 
string patientName;
float billAmount;  
string appointmentDate; 
public: 
 // Default Constructour
Patient() 
{ 
patientId = 0; 
patientName = "Not Assigned"; 
billAmount = 0.0;  
appointmentDate = "Not Fixed"; 
} 
// Parameterized Constructor 
Patient(int id, string name, float bill, string date) 
{ 
patientId = id; 
patientName = name;
billAmount = bill; 
appointmentDate = date;
} 
// Copy Constructor 
Patient(const Patient &p) 
{ 
patientId = p.patientId;  
patientName = p.patientName; 
billAmount = p.billAmount; 
appointmentDate = p.appointmentDate;
} 
// Member function to display patient details 
void display() 
{ 
cout << "\nPatient ID : " << patientId; 
cout << "\nPatient Name : " << patientName; 
cout << "\nBilling Amount : Rs. " << billAmount; 
cout << "\nAppointment Date : " << appointmentDate; 
cout << endl; 
} 
}; 

int main() 
{ 
// Create object using default constructor 
Patient p1; 
cout << "\n--- Default Constructor ---"; 
p1.display(); 
// Create object using parameterized constructor 
Patient p2(101, "Rahul Patil", 3500.50, "15-02-2026"); 
cout << "\n--- Parameterized Constructor ---"; 
p2.display(); 
// Create object using copy constructor 
Patient p3 = p2; 
cout << "\n--- Copy Constructor ---"; 
p3.display(); 
return 0; 
} 







