#include <iostream>
using namespace std;
void credit(double balance, double amount){
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