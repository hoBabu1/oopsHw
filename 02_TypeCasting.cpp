#include <iostream>

using namespace std;

int main() {
    int intVar = 5;
    float floatVar = 4.5;

    float resultImplicit = intVar + floatVar;
    cout << "Result of implicit typecasting (intVar + floatVar): " <<
     resultImplicit << endl;

    float resultExplicit = static_cast<float>(intVar) + floatVar; 
    cout <<"Result of explicit typecasting (static_cast<float>(intVar) + floatVar): "<<
     resultExplicit << endl;

    int a = 10;
    int b = 3;
    int c = 2;
    
    int resultPrecedence1 = a + b * c;
    cout << "Result without parentheses (a + b * c): " << 
    resultPrecedence1 << endl;

    int resultPrecedence2 = (a + b) * c;
    cout << "Result with parentheses ((a + b) * c): " <<
     resultPrecedence2 << endl;

    return 0;
}
