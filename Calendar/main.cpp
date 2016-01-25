#include <iostream>
#include <string>

using namespace std;

struct Event
{
    string name;
    int day; // value 1 - 31
    int month; // value 1-12
    int year; 
    string time;
};

void printInformation(Event event)
{
    cout << "Name: " << event.name << "\n";
    cout << "Date: " << event.day << "." << event.month << "." << event.year << "\n";
    cout << "Time: " << event.time << "\n";
}


int main()
{
    string myevent, time;
    int day, month, year;

    cout << "Enter a name for your event: " << endl;
    cin >> myevent;

    cout << "Enter a day for your event: " << endl;
    cin >> day;

    cout << "Enter a month for your event: " << endl;
    cin >> month;

    cout << "Enter a year for your event: " << endl;
    cin >> year;

    cout << "Enter a time for your event: " << endl;
    cin >> time;

    Event event = {myevent, day, month, year, time};
    
    printInformation(event);

    return 0;
}
