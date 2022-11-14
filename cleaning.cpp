#include <iostream>
int main(){
    
    using namespace std;

    int number_of_rooms;
    cout << "Enter the number of rooms to clean: ";
    cin >> number_of_rooms;

    int price_per_room {30};

    cout << "Number of rooms: "<< number_of_rooms;
    cout << "Price per room: " << price_per_room;    
    cout << "$" << number_of_rooms * price_per_room;








    // int favorite_number;
    // cout << "Enter your favorite number between 1 to 100.";

    // cin >> favorite_number;

    // cout << "Amazing!! That is my favorite number too!" << endl;
    return 0;
}