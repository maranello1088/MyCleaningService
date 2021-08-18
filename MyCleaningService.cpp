// Challenge

/*
    Paul's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:

Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

/*
PSEUDOCODE FOR THIS

    Prompt the user fot the number of small rooms and large rooms
    Store the values in two variables
    Declare and intialize a variable to be the product of number of small rooms and the cost per small room
    Repeat the same process for a large room
    Then multiply the cost by the tax rate for both small and large rooms
*/

#include <iostream>
using namespace std;

int main()
{
    const int estimateValidity{ 30 };
    const double pricePerSmallRoom{ 25.0 };
    const double pricePerLargeRoom{ 35.0 };
    const double salesTax{ 0.06 };

    std::cout << "Hello, welcome to Paul's Carpet Cleaning Service" << endl;
    cout << endl;
    int numberOfSmallRooms{ 0 };
    int numberOfLargeRooms{ 0 };
    cout << "Enter the number of Small Rooms and the number of Large Rooms that require cleaning, separated by a space: ";
    cin >> numberOfSmallRooms >> numberOfLargeRooms;

    double costPerSmallRoom{ (pricePerSmallRoom * numberOfSmallRooms) };
    double costPerLargeRoom{ (pricePerLargeRoom * numberOfLargeRooms) };

    cout << endl;
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "======================" << endl;

    cout << "Number of Small Rooms: " << numberOfSmallRooms << endl;
    cout << "Number of Large Rooms: " << numberOfLargeRooms << endl;

    cout << "Price per Small room is : $" << pricePerSmallRoom << endl;
    cout << "Price per Large room is : $" << pricePerLargeRoom << endl;

    cout << "Cost (without tax) for the " << numberOfSmallRooms << " small rooms is: $" << costPerSmallRoom << endl;
    cout << "Cost (without tax) for the " << numberOfLargeRooms << " large rooms is: $" << costPerLargeRoom << endl;

    double salesTaxSmall{ (costPerSmallRoom * salesTax) };
    double salesTaxLarge{ (costPerLargeRoom * salesTax ) };
    double totalSalesTax{ salesTaxSmall + salesTaxLarge };

    cout << "Cost: " << (costPerSmallRoom + costPerLargeRoom) << endl;
    cout << "Tax: " << totalSalesTax << endl;

    cout << "===================" << endl;
    cout << "Total Estimate: $" << (costPerSmallRoom + costPerLargeRoom) + totalSalesTax << endl;
    cout << "This Estimate is valid for: " << estimateValidity << " days." << endl;

    return 0;
}
        