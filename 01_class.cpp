#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
    string title;
    string author;
    float price;
public:
    Book(string t, string a, float p) : title(t), author(a), price(p) {}
    void displayDetails()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
    void applyDiscount(float percentage)
    {
        price -= price * (percentage / 100);
    }
};
int main()
{
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald", 29.99);
    cout << "Book details before discount:" << endl;
    myBook.displayDetails();
    myBook.applyDiscount(10); // Applying 10% discount
    cout << "\nBook details after discount:" << endl;
    myBook.displayDetails();
    return 0;
}
