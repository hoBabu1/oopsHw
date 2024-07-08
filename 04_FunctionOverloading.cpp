#include <iostream>
using namespace std;
void printMultiplicationTable(int number, int limit)
{
    for (int i = 1; i <= limit; ++i)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}
void printMultiplicationTable(int limit)
{
    for (int number = 1; number <= 10; ++number)
    {
        cout << "Multiplication Table for " << number << ":" << endl;
        for (int i = 1; i <= limit; ++i)
        {
            cout << number << " x " << i << " = " << number * i << endl;
        }
        cout << endl;
    }
}
int main()
{
    int choice, number, limit;
    cout << "Choose an option:" << endl;
    cout << "1. Print the multiplication table for a specific number" << endl;
    cout << "2. Print the multiplication tables to the limit" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter the number: ";
        cin >> number;
        cout << "Enter the limit: ";
        cin >> limit;
        cout << "Multiplication Table for " << number << ":" << endl;
        printMultiplicationTable(number, limit);
    }
    else if (choice == 2)
    {
        cout << "Enter the limit: ";
        cin >> limit;
        printMultiplicationTable(limit);
    }
    else
    {
        cout << "Invalid choice" << endl;
    }
    return 0;
}
