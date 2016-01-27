#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

struct Event
{
    string name;
    int day; // value 1 - 31
    int month; // value 1-12
    int year; 
    string time;
};

char myevent[256];
string eventTime;
int day, month, year;


void printInformation(Event event)
{
    cout << "Name: " << event.name << "\n";
    cout << "Date: " << event.day << "." << event.month << "." << event.year << "\n";
    cout << "Time: " << event.time << "\n";
}

void saveEvent(Event event)
{
    // Open a file to save the event(s) to
    ofstream outf("events.dat");
    // Check for errors when opening the file
    if (!outf)
    {
        // Print an error and exit
        cerr << "The file " << outf << " could not be opened to write!" << endl;
        exit(1);
    }

    outf << myevent << "," << day << "," << month << "," << year << "," << eventTime << endl;
}    

void loadEvents()
{
    // Read event(s) from file
    ifstream inf("events.dat");
    // Check for errors when opening the file
    if (!inf)
    {
        // Print an error and exit
        cerr << "The file " << inf << " could not be opened to read!" << endl;
        exit(1);
    }

    // while there are lines left to read
    while (inf)
    {
        string strInput;
        inf >> strInput;
        cout << strInput << endl;
    }
}

int main()
{
    cout << "Enter a name for your event: " << endl;
    cin.getline (myevent, 256);

    cout << "Enter a day for your event: " << endl;
    cin >> day;

    cout << "Enter a month for your event: " << endl;
    cin >> month;

    cout << "Enter a year for your event: " << endl;
    cin >> year;

    cout << "Enter a time for your event: " << endl;
    cin >> eventTime;

    Event event = {myevent, day, month, year, eventTime};
    
    saveEvent(event);

    printInformation(event);

    return 0;
}
