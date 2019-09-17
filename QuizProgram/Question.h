#pragma once
#include <string>
#include <vector>

class Question
{
public:

	Question(std::string someQuestionText, std::vector<std::string> someAnswers, int theRightAnswerIndex);
	~Question();

	void AddAnswer(std::string anAnswer);
	void SetRightAnswer(int theRightAnswerIndex);

	int GetRightAnswer();
	std::vector<std::string> GetAnswers();
	
	std::string GetQuestionText();

private:
	int rightAnswerIndex;

	std::vector<std::string> answers;
	std::string questionText;


};

