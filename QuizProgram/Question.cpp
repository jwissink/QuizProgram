#include "Question.hpp"

Question::Question()
{
}

Question::~Question()
{
}

void Question::SetRightAnswer(std::string anAnwser)
{
}

std::string Question::GetRightAnswer()
{
	return rightAnswer;
}

std::list<std::string> Question::GetWrongAnswers()
{
	return wrongAnswers;
}

void Question::AddWrongAnswer(std::string aWrongAnswer)
{
	wrongAnswers.push_back(aWrongAnswer);
}
