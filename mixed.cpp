#include <iostream>

using namespace std;

int main(){


    int total {};
    int num1 {}, num2{}, num3{};
    const int count {3};

    cout << "enter 3 integers separated by spaces:";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average {0.0};

    average= total / count;

    cout << "Ther 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "Ther average of the numbers is: " << average << endl;

    cout <<endl;
    return 0;
}