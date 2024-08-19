#include<iostream>
#include<ctime>

using namespace std;
int main(){
    int lb,ub,n,i=1,num;
    cout<<"**************************************************************";
    cout<<"\n\t\t    Number Guessing Game!\n";
    cout<<"**************************************************************";
    cout<<"\nEnter lower bound: ";
    cin>>lb;
    cout<<"Enter upper bound: ";
    cin>>ub;
    srand(time(NULL));
    n=(rand()%(ub-lb+1))+lb;
    //cout<<"\n"<<n;
    cout<<"\n\t*You have only 7 chances to guess the integer!*\n";
    while(i<=7){
        printf("\nGuess a number:- ");
        cin>>num;
        if(num<lb||num>ub)
            cout<<"Number out of bound.\n";
        else{
            if(num>n)
                cout<<"You guessed too high!\n";
            else if(num<n){
                cout<<"You guessed too low!\n";
            }
            else{
                cout<<"\n**************************************************************";
                cout<<"\n\tCongratulations you did it in "<<i<< " chances!\n";
                cout<<"**************************************************************\n";
                exit(1);
            }
        }
        i++;
    }
    cout<<"\n\tThe number is "<<n<<endl;
    cout<<"\n\tBetter Luck Next time!";
    return 0;
}