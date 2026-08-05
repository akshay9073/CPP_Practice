#include <iostream>

using namespace std;

class bank
{
    char name[20];
    int acc_no;
    char acc_type[10];
    float balance;
    
    public:
        void set_values();
        float deposit(float);
        float withdraw(float);
        void display();
}; // Fix 1: Added semicolon after class definition

void bank::set_values()
{
    cout << "\nEnter the Name : " << endl;
    cin >> name;
    cout << "\nEnter the account type : " << endl;
    cin >> acc_type;
    cout << "\nEnter the account number : " << endl;
    cin >> acc_no;
    cout << "\nEnter the balance : " << endl;
    cin >> balance;
}

// Fix 2: Defined as member functions using bank::
float bank::deposit(float d)
{
    balance += d;
    return balance;
}

float bank::withdraw(float w)
{
    if (w > balance) {
        cout << "Insufficient balance!" << endl;
    } else {
        balance -= w;
    }
    return balance;
}

void bank::display()
{
    cout << "\n--- Account Details ---" << endl;
    cout << "Name : " << name << endl;
    cout << "Account Number : " << acc_no << endl;
    cout << "Account Type : " << acc_type << endl;
    cout << "Balance : " << balance << endl;
    cout << "-----------------------" << endl;
}

int main()
{
    int choice;
    int count = 0;
    bank member[10]; // Fix 3: Given a fixed size array instead of [0]
    
    while(true)
    {
        cout << "\n==========Welcome To AB International Bank==================" << endl;
        cout << "1. Create account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Display Details" << endl;
        cout << "5. Exit" << endl;
        cout << "============================================================" << endl;
        
        cout << "Enter your choice : ";
        cin >> choice;
        
        switch(choice)
        {
            case 1:
                cout << "Create the account : " << endl;
                member[count].set_values();
                count++;
                break;
                
            case 2: {
                if (count == 0) {
                    cout << "No accounts found! Please create one first." << endl;
                    break;
                }
                int accIndex;
                cout << "Enter account index (0 to " << count - 1 << ") : ";
                cin >> accIndex;
                if (accIndex >= 0 && accIndex < count) {
                    float a;
                    cout << "Enter the amount to deposit : ";
                    cin >> a;
                    member[accIndex].deposit(a);
                    cout << "Amount deposited successfully." << endl;
                } else {
                    cout << "Invalid account index!" << endl;
                }
                break;
            }
                
            case 3: {
                if (count == 0) {
                    cout << "No accounts found! Please create one first." << endl;
                    break;
                }
                int accIndex;
                cout << "Enter account index (0 to " << count - 1 << ") : ";
                cin >> accIndex;
                if (accIndex >= 0 && accIndex < count) {
                    float w;
                    cout << "Enter the amount to withdraw : ";
                    cin >> w;
                    member[accIndex].withdraw(w);
                } else {
                    cout << "Invalid account index!" << endl;
                }
                break;
            }
                
            case 4: {
                if (count == 0) {
                    cout << "No accounts found!" << endl;
                    break;
                }
                for (int i = 0; i < count; i++) {
                    cout << "\nAccount [" << i << "]";
                    member[i].display();
                }
                break;
            }
            
            case 5:
                cout << "Thank you for banking with us!" << endl;
                return 0;
                
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    
    return 0;
}
