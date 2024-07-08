#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;
class InvalidAgeException : public exception
{
public:
    virtual const char *what() const throw()
    {
        return "Invalid age input. Age must be between 18 and 60.";
    }
};

class Student
{
private:
    string name;
    int age;

public:
    Student(string n, int a) : name(n)
    {
        if (a < 18 || a > 60)
        {
            throw InvalidAgeException();
        }
        age = a;
    }
    string getName() const
    {
        return name;
    }
    int getAge() const
    {
        return age;
    }
};

Student *createStudent(string name, int age)
{
    try
    {
        Student *ptr = new Student(name, age);
        return ptr;
    }
    catch (InvalidAgeException &e)
    {
        cerr << "Exception: " << e.what() << endl;
        return nullptr;
    }
    catch (bad_alloc &e)
    {
        cerr << "Memory allocation failed: " << e.what() << endl;
        return nullptr;
    }
}

int main()
{
    Student *student1 = createStudent("Chandan", 19);
    if (student1 != nullptr)
    {
        cout << "Student created successfully:" << endl;
        cout << "Name: " << student1->getName() << endl;
        cout << "Age: " << student1->getAge() << endl;
        delete student1;
    }
    cout << endl;

    Student *student2 = createStudent("Jane Smith", 16);
    if (student2 == nullptr)
    {
        cout << "Failed to create student due to invalid age input." << endl;
    }
    return 0;
}
