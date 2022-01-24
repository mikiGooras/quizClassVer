//
//  main.cpp
//  quizClassVer
//
//  Created by Michał GÓRNY on 24/01/2022.
//

#include <iostream>
#include <fstream>
#include "question.hpp"

using namespace std;



int main() {
    cout << "Hello this is easy quiz game, to play choose letter of the answer and press enter. "<< endl;
Question q[5];
int score = 0;
  
    for (int i=0; i<=4;i++){
    
        q[i].question_id=i+1;
        q[i].getQuestion();
        q[i].askQuestion();
        q[i].checkAnswer();
        score+=q[i].point;
    };
  

    cout << "it's game over, you got "<< score <<" points!"<< endl;
    
    return 0;
}
