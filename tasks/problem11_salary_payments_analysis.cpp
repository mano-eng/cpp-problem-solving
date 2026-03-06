/*
Program: Salary Payments Analysis

Description:
This program reads salary, apartment rent, and car payment
for 3 different persons. It checks if the salary is at least
double the total monthly payments (rent + car payment).
Finally, it prints the number of persons who satisfy this condition.
*/

#include <iostream>
using namespace std;

int main()
{
    // variables declaration
    float salary, rent, carPayment;
    int count = 0;

    // loop for 3 persons
    for(int i = 0; i < 3; i++)
    {
        // read salary
        cout << "Enter salary: ";
        cin >> salary;

        // read apartment rent
        cout << "Enter monthly apartment rent: ";
        cin >> rent;

        // read car payment
        cout << "Enter monthly car payment: ";
        cin >> carPayment;

        // calculate total payments
        float payments = rent + carPayment;

        // check if salary covers double payments
        if(salary >= 2 * payments)
        {
            count++;
        }
    }

    // display result
    cout << "Number of persons whose salary covers double of payments = "
         << count << endl;

    return 0;
}