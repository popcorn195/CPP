#include<iostream>

using namespace std;

int main(){
    string ques[]={"1. What is the chemical symbol for water?","2. Which planet is known as the Red Planet?","3. What is the powerhouse of the cell?","4. What is the most abundant gas in Earth's atmosphere?","5. What is the process by which plants make their own food?"};

    string options[][5]={{"A) H2O","B) CO2","C) NaCl","D) O2"},{"A) Venus","B) Earth","C) Mars","D) Jupiter"},{"A) Nucleus","B) Ribosome","C) Endoplasmic Reticulum","D) Mitochondrion"},{"A) Oxygen","B) Carbon Dioxide","C) Nitrogen","D) Argon"},{"A) Respiration","B) Photosynthesis","C) Digestion","D) Fermentation"}};

    char ansKey[]={'A','C','D','C','B'};

    int ni,nj,score=0,i,j;
    char guess;
    ni=sizeof(ques)/sizeof(ques[0]);
    nj=sizeof(options[0])/sizeof(options[0][0]);

    cout<<"\n**************************************************************\n";
    cout<<"                             QUIZ!";
    cout<<"\n**************************************************************\n";
    for(i=0;i<ni;i++){
        cout<<"\n"<<ques[i];
        for(j=0;j<nj;j++){
            cout<<"\n"<<options[i][j];
        }
        cout<<":";
        cin>>guess;
        guess=toupper(guess);
        if(guess==ansKey[i]){
            cout<<"Correct!\n";
            score++;
        }
        else{
            cout<<"Incorrect!\n";
            cout<<"Correct answer: "<<ansKey[i]<<"\n";
        }
    }

    cout<<"\n**************************************************************\n";
    cout<<"                             RESULT";
    cout<<"\n**************************************************************\n";
    cout<<"Correst Guesses: "<<score;
    cout<<"\nScore: "<<(score/(double)ni)*100<<"%";
    return 0;
}