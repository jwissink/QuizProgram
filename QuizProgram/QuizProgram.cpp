// QuizProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <list>

#include "Question.h"

int main()
{
	std::vector<Question*> questions;
	Question* myQ = new Question("Wat is de vraag", { "antwoord0", "antwoord1", "antwoord2" }, 1);
	Question anotherQ("Tweede vraag", { "antwoord0", "antwoord1", "antwoord2" }, 0);
	Question myThirdQ("Als", { "Het", "antwoord", "deze", "is", "dan", "moet", "je", "dat", "kiezen" }, 4);
	
	questions.push_back(myQ);
	questions.push_back(&anotherQ);
	questions.push_back(&myThirdQ);
	
	std::cout << "De super mega Quiz" << std::endl;
	
	while (true) {
		for (Question* q : questions) {
			std::cout << q->GetQuestionText() << "\n";

			for (int i = 0; i < q->GetAnswers().size(); i++) {
				std::cout << i << ": " << q->GetAnswers().at(i) << std::endl;
			}
			std::cout << "\n" << ": ";
			std::string input;
			std::cin >> input;
			int chosenAnswer = std::stoi(input);
			if (chosenAnswer == q->GetRightAnswer()) {
				std::cout << "Correct!" << std::endl;
			}
			else {
				std::cout << "wrong!" << std::endl;
			}
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
