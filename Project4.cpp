/*Project converse the time */

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void PrintHourClock(int hours, int minutes, int seconds) { // Function to set the clock format
    //set variable, for 12 hour format, if hours >=12
    string period = (hours < 12) ? "AM" : "PM";

    cout << endl;
    cout << "*******************  *******************" << endl;
    cout << "*  12-Hour Clock  *  *  24-Hour Clock  *" << endl;
    cout << "*   ";
    cout << setfill('0');
    cout << setw(2) << hours % 12 << ":"; //To print out in 12 hours format
    cout << setw(2) << minutes << ":";
    cout << setw(2) << seconds << " ";
    cout << period << "   *  *     ";
    cout << setw(2) << hours << ":";
    cout << setw(2) << minutes << ":";
    cout << setw(2) << seconds;
    cout << "    *" << endl;
    cout << "*******************  *******************" << endl;
}

int main() {
    srand(time(0)); // random number generator  for current time

    int hours = rand() % 24;
    int minutes = rand() % 60;
    int seconds = rand() % 60;
    // to print out the current time
    PrintHourClock(hours, minutes, seconds);

    int choice;
    //while loop to generate the menu
    while (true) {
        //Print out the menu choice
        cout << "Menu: " << endl;
        cout << "1. Add One Hour" << endl;
        cout << "2. Add One Minute" << endl;
        cout << "3. Add One Second" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 1) { // if the input 1, add one hour to previous time
            hours = (hours + 1) % 24;
        }
        else if (choice == 2) { // if the input 2, add one minute to previous time
            minutes = (minutes + 1) % 60;
        }
        else if (choice == 3) { // if the input 3, add one second to previous time
            seconds = (seconds + 1) % 60;
        }
        else if (choice == 4) { // if the input 4, exit the program
            cout << "Thank you for visiting our website." << endl;
            break;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
        PrintHourClock(hours, minutes, seconds);
    }

    return 0;
}