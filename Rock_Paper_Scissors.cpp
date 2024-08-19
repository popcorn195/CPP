#include<iostream>
#include<ctime>

using namespace std;

char getUserChoice();
char getCompChoice();
void showChoice(char);
void winner(char,char);



int main(){
    char user,comp;
    int ch,x;
    x:
        cout<<"\n*************************\n";
        cout<<"Rock-Paper-Scissors Game!\n";
        cout<<"*************************\n";
        user=getUserChoice();
        cout<<"Your Choice: ";
        showChoice(user);
        comp=getCompChoice();
        cout<<"Computer's Choice: ";
        showChoice(comp);
        winner(user,comp);
    cout<<"\nEnter 1 to re-play, else press any key: ";
    cin>>ch;
    if(ch==1)
        goto x;
    else
        exit(1);
    return 0;
}


char getUserChoice(){
    char ch;
    do{
        cout<<"\nEnter:\n'r' for Rock\n'p' for Paper\n's' for Scissors\n: ";
        cin>>ch;
    }while(ch!='r'&&ch!='p'&&ch!='s');
    return ch;
}


char getCompChoice(){
    srand(time(NULL));
    int n=(rand()%3)+1;
    switch(n){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}


void showChoice(char ch){
    switch(ch){
        case 'r': cout<<"Rock\n";
                break;
        case 'p': cout<<"Paper\n";
                break;
        case 's': cout<<"Scissors\n";
                break;
    }
}


void winner(char user,char comp){
    switch(user){
        case 'r': if(comp=='r')
                    cout<<"It's a Tie!\n";
                  else if(comp=='p')
                    cout<<"You Loose!\n";
                  else
                    cout<<"You Win!\n";
                  break;
        case 'p': if(comp=='p')
                    cout<<"It's a Tie!\n";
                  else if(comp=='s')
                    cout<<"You Loose!\n";
                  else
                    cout<<"You Win!\n";
                  break;
        case 's': if(comp=='s')
                    cout<<"It's a Tie!\n";
                  else if(comp=='r')
                    cout<<"You Loose!\n";
                  else
                    cout<<"You Win!\n";
                  break;
    }
}