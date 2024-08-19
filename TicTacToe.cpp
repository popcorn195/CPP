#include<iostream>
#include<ctime>

using namespace std;

void drawBoard(char *);
void uMove(char *,char);
void cMove(char *,char);
bool winner(char *,char,char);
bool tie(char *);

int main(){
    char space[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char user='X';
    char comp= 'O';
    bool r=true;
    drawBoard(space);
    while(r){
        uMove(space,user);
        drawBoard(space);
        if(winner(space,user,comp)){
            r=false;
            break;
        }
        else if(tie(space)){
            r=false;
            break;
        }

        cMove(space,comp);
        drawBoard(space);
        if(winner(space,user,comp)){
            r=false;
            break;
        }
        else if(tie(space)){
            r=false;
            break;
        }
    }
    cout<<"Thankyou for playing!\n";
    return 0;
}


void drawBoard(char *space){
    cout<<"\n     |     |     \n";
    cout<<"  "<<space[0]<<"  |  "<<space[1]<<"  |  "<<space[2]<<"  \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<space[3]<<"  |  "<<space[4]<<"  |  "<<space[5]<<"  \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<space[6]<<"  |  "<<space[7]<<"  |  "<<space[8]<<"  \n\n";
}


void uMove(char *space,char u){
    int n;
    do{
        cout<<"Enter spot to place marker (1-9): ";
        cin>>n;
        n--;
        if(space[n]==' '){
            space[n]=u;
            break;
        }
    }while(!n>0||!n<8);
}


void cMove(char *space,char c){
    int n;
    srand(time(NULL));
    while (true){
        n=rand()%9;
        if(space[n]==' '){
            space[n]=c;
            break;
        }
    }   
}


bool winner(char *space,char u,char c){
    if(space[0]!=' '&&space[0]==space[1]&&space[1]==space[2])
        space[0]==u?cout<<"You Win!\n":cout<<"You Loose!\n";
    else if(space[3]!=' '&&space[3]==space[4]&&space[4]==space[5])
        space[3]==u?cout<<"You Win!\n":cout<<"You Loose!\n";
    else if(space[6]!=' '&&space[6]==space[7]&&space[7]==space[8])
        space[6]==u?cout<<"You Win!\n":cout<<"You Loose!\n";
    else if(space[0]!=' '&&space[0]==space[3]&&space[3]==space[6])
        space[0]==u?cout<<"You Win!\n":cout<<"You Loose!\n";
    else if(space[1]!=' '&&space[1]==space[4]&&space[4]==space[7])
        space[1]==u?cout<<"You Win!\n":cout<<"You Loose!\n";
    else if(space[2]!=' '&&space[2]==space[5]&&space[5]==space[8])
        space[2]==u?cout<<"You Win!\n":cout<<"You Loose!\n";
    else if(space[0]!=' '&&space[0]==space[4]&&space[4]==space[8])
        space[0]==u?cout<<"You Win!\n":cout<<"You Loose!\n";
    else if(space[2]!=' '&&space[2]==space[4]&&space[4]==space[6])
        space[2]==u?cout<<"You Win!\n":cout<<"You Loose!\n";
    else
        return false;
    return true;
}


bool tie(char *space){
    for(int i=0;i<9;i++){
        if(space[i]==' ')
            return false;
    }
    cout<<"It's a Tie!\n";
    return true;
}