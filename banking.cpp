#include<iostream>
#include<iomanip>

void showBalance(double);
double deposit();
double withdraw(double);

using namespace std;

int main(){
    double bal=1234;
    int ch,fBal;
    do{
        cout<<"\nPlease Enter:\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\nChoice: ";
        cin>>ch;
        cin.clear();
        fflush(stdin);
        switch(ch){
        case 1: showBalance(bal);
                break;
        case 2: bal+=deposit();
                showBalance(bal);
                break;
        case 3: bal-=withdraw(bal);
                showBalance(bal);
                break;
        case 4: cout<<"\nThankyou for visiting!";
                break;
        default: cout<<"Invalid choice.\n";
        }
    }while(ch!=4);
    
    return 0;
}


void showBalance(double bal){
       cout<<"Your balance is: $"<<setprecision(2)<<fixed<<bal<<"\n";
}


double deposit(){
        double amt;
        cout<<"Enter amount to be deposited: $";
        cin>>amt;
        if(amt>0)
                return amt;
        else{
                cout<<"Please enter a valid amount.\n";
                return 0;
        } 
}


double withdraw(double bal){
        double amt;
        cout<<"Enter amount to be withdrawn: $";
        cin>>amt;
        if(amt>bal){
                cout<<"Insufficient funds; Please enter a valid amount.\n";
                return 0;
        }
        else if(amt<0){
                cout<<"Please enter a valid amount.\n";
                return 0;
        } 
        else{
                return amt;
        } 
}