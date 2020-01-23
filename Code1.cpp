/*Create a class named 'Member' having the following members:
Data members
1 - Name
2 - Age
3 - Phone number
4 – Address
It also has a function named 'printSalary' which prints the salary of the members.
Two classes 'Employee' and 'Manager' inherits the 'Member' class. The 'Employee' and 'Manager' classes have data members 'specialization' and 
'department' respectively. Now, assign name, age, phone number, address and salary to an employee and a manager by making an object of both of these 
classes and print the same.*/

#include <iostream> 
using namespace std; 

class Member 
{ public: 
   string Name, Address;
   int Age;
   double PhoneNumber;
   float Salary;
  
   void printSalary()
   {
     cout<<"SALARY IS: "<<Salary;
   }
  
   void input()
    {
     cout<<"\nEnter Name:";
     cin>>Name;
     cout<<"\nEnter Age:";
     cin>>Age;
     cout<<"\nEnter Phone Number:";
     cin>>PhoneNumber;
     cout<<"\nEnter Address:";
     cin.ignore();
     getline(cin,Address);
     cout<<"\nEnter Salary:";
     cin>>Salary;
    }
   
    void output()
    {
     cout<<"\nName:"<<Name;
     cout<<"\nAge:"<<Age;
     cout<<"\nPhone Number:"<<PhoneNumber;
     cout<<"\nAddress:"<<Address;
     cout<<"\nSalary:"<<Salary;
     cout<<"\n";
    }
	
}; 

class Employee: public Member
{ public:
   string specialization;
   
};

class Manager: public Member
{ public:
   string department;
   
};


int main() 
{
  Employee obj1;
  Manager obj2;
  
  obj1.input();
  obj1.output();
  obj2.input();
  obj2.output();
  
  return 0;
} 
