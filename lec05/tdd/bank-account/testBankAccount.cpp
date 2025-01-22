#include "bankAccount.h"
#include "tddFuncs.h"
#include<iostream>
int main() {
    std::cout << "Testing class BankAccount..." << std::endl;

    // 1. check 0 balance upon creation
    BankAccount b1;
    assertEquals("check 0 balance upon creation", 0, b1.getBalance());

    // 2. deposit works correctly
    BankAccount b2;
    b2.deposit(1000);
    assertEquals("deposit works correctly", 1000, b2.getBalance());

    // 3. withdraw works correctly
    BankAccount b3;
    b3.deposit(1000);
    b3.withdraw(500);
    assertEquals("withdraw works correctly", 500, b3.getBalance());

    // 4. deposit shouldn't allow -ve amounts
    BankAccount b4;
    b4.deposit(-1000);  // assume the program ignores this request
    assertEquals("no -ve deposits", 0, b4.getBalance());

    // 5. don't allow withdrawal of amount more than balance
    BankAccount b5;
    b5.withdraw(100);  // assume the program ignores this request
    assertEquals("don't allow withdrawal of amount more than balance", 
                 0, 
                 b5.getBalance());

    return 0;
}