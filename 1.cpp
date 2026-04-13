#include <iostream>
using namespace std;

int main() 
{
    int n;
    int approvedCount = 0;

    cout << "Enter total number of applicants: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        double salary, loanAmount;

        cout << "\nApplicant " << i << endl;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Loan Amount: ";
        cin >> loanAmount;

        // Approval condition
        if(salary >= 30000 && loanAmount <= 500000)
        {
            cout << "Loan Approved!" << endl;
            approvedCount++;
        }
        else
        {
            cout << "Loan Rejected!" << endl;
        }
    }

    cout << "\nTotal Approved Applicants: " << approvedCount << endl;

    return 0;
}
