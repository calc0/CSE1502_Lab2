#include <iostream>
#include <string>

using namespace std;

int main()
{
    /* Get input from user */
    string firstName, lastName;
    int inches;
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