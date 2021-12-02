#include <iostream>
#include <vector>

using namespace std;

void showMenu(){
    cout << "**********MENU**********" <<endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "************************" << endl;
}

int main(){
    
    
    // Check accoubt balance, deposit, withdraw, menu
    int option;
    double balance = 2300;
    
    
    do{
    showMenu();
    cout <<"Option: ";
    cin >> option;
    
    
    
    switch(option) {
    case 1:cout<<"Balance is is: " << balance << " £" << endl; break;
    case 2:cout<< "Deposit amount:";
        double depositAmount;
        cin >> depositAmount;
        balance+= depositAmount;
        break;
    case 3:cout<<"Withdraw amount:";
        double withdrawAmount;
        cin >> withdrawAmount;
        if(withdrawAmount <= balance)
            balance -= withdrawAmount;
        else
            cout << "You do not have enough funds to withdraw the amount" << endl;
        
        break;
    }
    } while (option!= 4);
    
    
    
    
    return(0);
}