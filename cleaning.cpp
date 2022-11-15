#include <iostream>
int main(){
    
    using namespace std;

    int number_of_rooms;
    cout << "Enter the number of rooms to clean: ";
    cin >> number_of_rooms;

    int price_per_room {30};
    float sales_tax {0.06};
    int quote_length {30};

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: "<< number_of_rooms <<endl; 
    cout << "Price per room: $" << price_per_room <<endl;   
    cout << "Cost: $" << number_of_rooms * price_per_room <<endl;
    cout << "Tax: $" << number_of_rooms * price_per_room * sales_tax <<endl;
    cout << "=============================================" <<endl;
    cout << "Total estimate is $" << (number_of_rooms * price_per_room) + (number_of_rooms * price_per_room * sales_tax) <<endl; 
    cout << "This estimate is good for " << quote_length << " days" << endl;

    return 0;
}