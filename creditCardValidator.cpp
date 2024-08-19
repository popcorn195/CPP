#include<iostream>

using namespace std;

int getDigit(const int);
int sOdd(const string);
int sEve(const string);

int main(){
    string cardNo;
    int r;
    cout<<"Enter Credit Card Number: ";
    cin>>cardNo;
    r=sEve(cardNo)+sOdd(cardNo);
    if(r%10==0)
        cout<<"Card Number "<<cardNo<<" is Valid.\n";
    else
        cout<<"Card Number "<<cardNo<<" is Invalid.\n";
    return 0;
}


int getDigit(const int num){
    return num%10+(num/10%10);
}


int sOdd(const string n){
    int s=0;
    for(int i=n.size()-1;i>0;i-=2){
        s+=n[i]-'0';
    }
    return s;
}


int sEve(const string n){
    int s=0;
    for(int i=n.size()-2;i>=0;i-=2){
        s+=getDigit((n[i]-'0')*2);
    }
    return s;
}