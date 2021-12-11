#include <iostream>
using namespace std;

int main()
{
    cout << "Namaste Duniya\n" << endl;
    cout << "*******************" << endl;
    // dataypes & variables
    int a = 28;
    char ch1 = 'M';
    cout << a << endl;
    cout << ch1 << endl;
    bool a1 = true;
    cout << a1 << endl;
    float a2 = 89.4;
    cout << a2 << endl;
    string name = "mohammed";
    cout << name << endl;

    // typecasting
    cout << "\n";
    int b = 'm';
    cout << b << endl;
    int b2 = ch1;
    cout << b2 << endl;

    char ch2 = 110;
    cout << ch2 << endl;

    //Operators
    cout << "*******************" << endl;
    cout << "Addition of 9 and 4: " << 9 + 4 << endl;
    cout << "Subtraction of 9 and 4: " << 9 - 4 << endl;
    cout << "Multiplication of 9 and 4: " << 9 * 4 << endl;
    cout << "Division of 9 and 4: " << 9 / 4 << endl;
    cout << "Float division of 9 and 4: " << 9.0 / 4 << endl;
    cout << "Modulo division of 9 and 4: " << 9 % 4 << endl;
    cout << "\n";
    cout << "Checking 9 equals 4: " << (9 == 4) << endl;
    cout << "Checking 9 greater than 4: " << (9 > 4) << endl;
    cout << "Checking 9 smaller than 4: " << (9 < 4) << endl;
    cout << "Checking 9 greater than and equal to 4: " << (9 >= 4) << endl;
    cout << "Checking 9 smaller than and equal to 4: " << (9 <= 4) << endl;
    cout << "Checking 9 not equals 4: " << (9 != 4) << endl;
    cout << "\n";
    cout << "Doing && of 9 and 4: " << (9 && 4) << endl;
    cout << "Doing || of 9 and 4: " << (9 || 4) << endl;
    cout << "Doing ! 4: " << (!4) << endl;
    cout << "\n";
}