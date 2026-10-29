/*  Program File Name: Chapter 5 Exercise 3
    Programmer: Christian Min
    Date: 10/28/26
    Requirements:
    Write a program that asks the user for the speed of a vehicle (in mph) and how many hours it has traveled. It should then use a loop to display
    the total distance traveled at the end of each hour of that time period.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int time;       //to hold the value for the time traveled in hours
    double speed;       //to hold the value for speed of vehicle in mph

    cout << "Enter the speed of the vehicle in miles per hour: ";
    cin >> speed;

    while (speed < 0) {     //*input validation: checks to make sure the vehicle is actually moving forward, which would mean it has a speed greater than 0, if not prompt the user to enter the speed again
        cout << "Error: The speed of the vehicle cannot be negative! Please enter the speed of the vehicle in miles per hour: ";
        cin >> speed;
    }

    cout << "Enter the amount of time the vehicle has traveled in hours: ";
    cin >> time;

    while (time < 1) {      //*input validation: checks to makem sure the vehicle has traveled for at least 1 hour to calculate the distance for one "segment." If the time traveled is less than 1 hour, prompt the user to enter the time again
        cout << "Error: The amount of time the vehicle has traveled has to be at least 1 hour to calculate the distance! Please enter the amount of time in hours: ";
        cin >> time;
    }

    cout << "\nHour\t\tDistance Traveled\n";        //using \n for new line formatting, and \t for horizintal/tab formatting
    cout << string(35, '_') << "\n";        //print out a divider and newline for the output chart

    for (int i = 1; i <= time; i++) {       //for loop starting at 1, for the minimum hour, and exiting when the last hour of the time traveled is reached
        double distance = (i * speed);      //use the distance formula in the assignment page on canvas, with i changing value +1 until the last hour is calculated
        cout << i << "\t\t" << distance << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
