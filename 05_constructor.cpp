#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int rollNumber;
    float marks;

public:
    Student() : name("Unknown"), rollNumber(0), marks(0.0) {}
    Student(string n, int r, float m) : name(n), rollNumber(r), marks(m) {}
    string getName() const
    {
        return name;
    }
    void setName(string n)
    {
        name = n;
    }
    int getRollNumber() const
    {
        return rollNumber;
    }
    void setRollNumber(int r)
    {
        rollNumber = r;
    }
    float getMarks() const
    {
        return marks;
    }
    void setMarks(float m)
    {
        marks = m;
    }
    void printDetails() const
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
  
    Student student1;
    cout << "Student 1 details (default constructor):" << endl;
    student1.printDetails();
    cout << endl;

   
    Student student2("John Doe", 123, 95.5);
    cout << "Student 2 details (parameterized constructor):" << endl;
    student2.printDetails();
    cout << endl;

   
    student1.setName("Jane Smith");
    student1.setRollNumber(456);
    student1.setMarks(88.7);
    cout << "Student 1 details (after using setters):" << endl;
    student1.printDetails();

    return 0;
}
