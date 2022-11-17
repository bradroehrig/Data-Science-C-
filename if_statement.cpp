#include <iostream>

using namespace std;

int main() {
    int num{};
    const int min {10};
    const int max {100};

    cout << "Enter a number between " << min << " and " << max << ":";
    cin >> num;

    if (num >= min) {
        cout <<"\n================== if state 1 =========================" << endl;
        
        cout << num << " is greater than " << min << endl;


    }


    cout << endl;
    return 0;
}

