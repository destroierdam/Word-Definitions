#pragma once
#include <string>
class Entry
{
	std::string word;
	std::string definition;
public:
	Entry(const std::string& word, const std::string& definition);
};

