//
//  question.hpp
//  quizClassVer
//
//  Created by Michał GÓRNY on 24/01/2022.
//

#ifndef question_hpp
#define question_hpp
#include <iostream>
#include <stdio.h>

using namespace std;



class Question{
public:
    int question_id, point;
    string header;
    string answerA, answerB, answerC, answerD, rightAnswer, userAnswer;
    
    void getQuestion(); //fetch question from txt file
    void askQuestion (); //Showing the question and answers, ask user for answer
    void checkAnswer(); //checking users answer
    
};




#endif /* question_hpp */
