/* Program File Name: Ch4_Ex1
Programmer: Frank Sonsini
Date : October 2026
Requirements :
    Write a program that inputs two different numbers, then determines which is larger using conditional operators and outputs the result
 */

#include <iostream>
#include <iomanip>
    using namespace std;

int main()
{
    double first_number,second_number;
    
    cout << fixed;

    cout << "Please enter two different numbers" << endl;
    cin >> first_number >> second_number;
    
    if (first_number == second_number)
        cout << "Your numbers are the same. Please run the program again and enter two different numbers" << endl;
    else if (first_number < second_number)
        cout << "Your first number " << first_number << " is less than your second number " << second_number << "." << endl;
    else
        cout << "Your first number " << first_number << " is greater than your second number " << second_number << "." << endl;

    
    return(0);
}