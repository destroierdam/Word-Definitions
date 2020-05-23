#include "Entry.h"

Entry::Entry(const std::string& word, const std::string& definition)
{
	this->word = word;
	this->definition = definition;
}

std::string Entry::getWord() const {
	return this->word;
}

std::string Entry::getDefinition() const
{
	return this->definition;
}
