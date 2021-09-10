#include <iostream>

using namespace std;

int main()
{
    /* Initializing Variables */
    double i1, i2, i3;
    double avg, min, max;

    /* Get input from user */
    cout << "Please enter three different numbers: " << endl;
    cin >> i1;
    cin >> i2;
    cin >> i3;

    /* Calculations and sorting */
    max = i1;
    min = i1;
    avg = (i1 + i2 + i3)/3;

    /* Max */
    if(i2 > max)
    {
        max = i2;
    }
    if(i3 > max)
    {
        max = i3;
    }

    /* Min */
    if(i2 < min)
    {
        min = i2;
    }
    if(i3 < min)
    {
        min = i3;
    }

    /* Output Min, Max, and Avg. */
    cout << "Thanks. Here are the result:" << endl;
    cout << "\n\tMIN: " << min << endl;
    cout << "\tMAX: " << max << endl;
    cout << "\tAVG: " << avg << "\n" << endl;

    return 0;
}