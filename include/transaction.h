#include <iostream>
using namespace std;
void credit(double &balance, double &amount){
    if(amount>balance){
        cout<< "Insufficient balance for credit." << endl;
    }
    else if(amount <= 0){
        cout << "Credit amount must be positive." << endl;
    }
    else{
        balance -= amount;
        cout << "Credit successful. New balance: " << balance << endl;
    }
};
void debit(double &balance, double &amount){
    if(amount <= 0){
        cout << "Debit amount must be positive." << endl;
    }
    else{
        balance += amount;
        cout << "Debit successful. New balance: " << balance << endl;
    }
};
void transfer(double &from_balance, double &to_balance, double amount){
    if(amount <= 0){
        cout << "Transfer amount must be positive." << endl;
    }
    else if(amount > from_balance){
        cout << "Insufficient balance for transfer." << endl;
    }
    else{
        from_balance -= amount;
        to_balance += amount;
        cout << "Transfer successful. New balances: From: " << from_balance << ", To: " << to_balance << endl;
    }
};
void print_balance(double balance){
    cout << "Current balance: " << balance << endl;
};