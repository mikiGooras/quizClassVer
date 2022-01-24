//
//  question.cpp
//  quizClassVer
//
//  Created by Michał GÓRNY on 24/01/2022.
//

#include "question.hpp"
#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

void Question::getQuestion(){
    fstream file;
    file.open("/Users/michalgorny/Desktop/projekty/c++/quizClassVer/quizClassVer/questions.txt", ios::in);
    
    if(file.good()== false){cout << " cnat find the file with questions!\n";
        exit(0);
    }
    int lineNumber = (question_id-1)*6+1;
    int whichLine =1;
    string bufor;
    
    while(getline(file,bufor)){
        if (whichLine==lineNumber){
            header=bufor;}else if (whichLine==lineNumber+1){
                answerA=bufor;
            }
            else if (whichLine==lineNumber+2){
                answerB=bufor;
            }
            else if (whichLine==lineNumber+3){
                answerC=bufor;
            }
            else if (whichLine==lineNumber+4){
                answerD=bufor;
            }
            else if (whichLine==lineNumber+5){
                rightAnswer=bufor;
            };
            whichLine++;
    };
    
    file.close();
    
};
void Question::askQuestion(){
    
    cout<<header<< endl;
    cout<<" odp. 1: "<<answerA<< endl;
    cout<<" odp. 2: "<<answerB<< endl;
    cout<<" odp. 3: "<<answerC<< endl;
    cout<<" odp. 4: "<<answerD<< endl;
    cout<< "your answer: ";
    cin>> userAnswer;

};
void Question::checkAnswer(){
  
    if (userAnswer==rightAnswer) {
        point=1;
        
    }
    else{
        point =0;
    }
};
    

    


