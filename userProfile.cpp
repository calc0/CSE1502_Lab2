#include <iostream>

using namespace std;

int main()
{
    /* Initializing Variables */
    string firstName, lastName;
    int inches;

    /* Get input from user */
    cout << "Hello! What is your full name?" << endl;
    cin >> firstName;
    cin >> lastName;
    cout << "What is your height (in inches)?" << endl;
    cin >> inches;

    /* Output Profile */
    cout << "\n\tFIRST NAME: " << firstName << endl;
    cout << "\tLAST NAME: " << lastName << endl;
    cout << "\tHEIGHT: " << inches/12 << "' " << inches%12 << "\"\n" << endl;
    
    return 0;
}