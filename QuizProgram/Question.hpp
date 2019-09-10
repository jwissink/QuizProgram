#pragma once
#include <string>
#include <list>
class Question
{
public:
	Question();
	~Question();

	void SetRightAnswer(std::string aWrongAnswer);
	void AddWrongAnswer(std::string aWrongAnswer);

	std::string GetRightAnswer();
	std::list<std::string> GetWrongAnswers();
private:
	std::string rightAnswer;
	std::list<std::string> wrongAnswers;
};

