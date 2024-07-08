#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
class Calculator
{
public:
    T add(T a, T b)
    {
        return a + b;
    }
    T subtract(T a, T b)
    {
        return a - b;
    }
};
template <typename T>
class ScientificCalculator : public Calculator<T>
{
public:
    double squareRoot(T a)
    {
        return sqrt(a);
    }
    double power(T base, T exponent)
    {
        return pow(base, exponent);
    }
};

int main()
{
    Calculator<int> intCalc;
    cout << "Integer Calculator:" << endl;
    cout << "Addition: " << intCalc.add(10, 5) << endl;
    cout << "Subtraction: " << intCalc.subtract(10, 5) << endl;
    cout << endl;

    Calculator<double> doubleCalc;
    cout << "Double Calculator:" << endl;
    cout << "Addition: " << doubleCalc.add(3.5, 2.7) << endl;
    cout << "Subtraction: " << doubleCalc.subtract(3.5, 2.7) << endl;
    cout << endl;

    ScientificCalculator<float> sciCalc;
    cout << "Scientific Calculator (Float):" << endl;
    cout << "Addition: " << sciCalc.add(7.2f, 3.1f) << endl;
    cout << "Subtraction: " << sciCalc.subtract(7.2f, 3.1f) << endl;
    cout << "Square Root: " << sciCalc.squareRoot(25.0f) << endl;
    cout << "Power: " << sciCalc.power(2.0f, 3.0f) << endl;

    return 0;
}
