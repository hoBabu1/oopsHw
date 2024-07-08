#include <iostream>

using namespace std;

float calculateAverage(float mark1, float mark2, float mark3, float mark4, float mark5) {
    return (mark1 + mark2 + mark3 + mark4 + mark5) / 5;
}

char determineGrade(float average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    float mark1, mark2, mark3, mark4, mark5;

    cout << "Enter the marks for five subjects: " << endl;
    cout << "Subject 1: ";
    cin >> mark1;
    cout << "Subject 2: ";
    cin >> mark2;
    cout << "Subject 3: ";
    cin >> mark3;
    cout << "Subject 4: ";
    cin >> mark4;
    cout << "Subject 5: ";
    cin >> mark5;

    float average = calculateAverage(mark1, mark2, mark3, mark4, mark5);
    char grade = determineGrade(average);

    cout << "The final grade is: " << grade << endl;

    return 0;
}
