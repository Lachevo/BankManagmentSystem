#include <iostream>
#include <string>

// Displays the main menu and returns the user's choice
int displayMainMenu() {
    std::cout << "====== Bank Management System ======\n";
    std::cout << "1. Create Account\n";
    std::cout << "2. Deposit\n";
    std::cout << "3. Withdraw\n";
    std::cout << "4. Check Balance\n";
    std::cout << "5. Exit\n";
    std::cout << "Enter your choice: ";
    int choice;
    std::cin >> choice;
    return choice;
}

