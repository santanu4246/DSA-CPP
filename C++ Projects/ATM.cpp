#include <bits/stdc++.h>
using namespace std;

class ATM
{
public:
    void MainBalance(double Balance)
    {
        cout << "Your Current Balance: " << Balance << endl;
    }
    // Deposit into Bank ac
    double Deposit(double dep, double balance)
    {
        return dep + balance;
    }
    // withdraw from bank ac
    double Withdraw(double with, double balance)
    {
        return balance - with;
    }
};

int main()
{
    ATM A;
    int cardno = 1;
    int pin = 2;
    double balance = 0;
    int ch;
    int card;
    cout << "Enter Your Card No:";
    cin >> card;
    int Pin;
    cout << "Enter Your Pin:";
    cin >> Pin;
    if (card == cardno && pin == Pin)
    {
        do
        {
            cout << "1) For view Balance" << endl;
            cout << "2) For Deposit" << endl;
            cout << "3) For Withdraw" << endl;
            cout << "4) Exit" << endl;
            cout << "Enter Your Choice:" << endl;
            cin >> ch;
            if(!ch<4)
            {
                cout<<"Invalid choice. Try again.";
            }
            if (!(cin >> ch))
            {
                // Clear the error state
                cin.clear();
                // Ignore the invalid input
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a numeric value." << endl;
                continue; // Skip the rest of the loop and start over
            }
            switch (ch)
            {
            case 1:
                A.MainBalance(balance);
                break;
            case 2:
                double dep;
                cout << "Enter how much value you want to deposit: " << endl;
                cin >> dep;
                balance = A.Deposit(dep, balance);
                cout << "New balance after deposit:" << balance << endl;
                break;
            case 3:
                double wit;
                cout << "Enter how much amount you want to withdraw: " << endl;
                cin >> wit;
                balance = A.Withdraw(wit, balance);
                if (balance < 0)
                {
                    cout << "You dont have enough money, please check your balance." << endl;
                }
                else
                    cout << "New balance after withdraw:" << balance << endl;
                break;
            case 4:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
                break;
            }
        } while (ch != 4);
    }
    else
    {
        cout << "Pin or Cardno is invalid!" << endl;
    }

    return 0;
}
