#pragma once
#include <vector>
#include "Entry.h"
class Dictionary
{
	std::vector<Entry> entries;
public:


	Dictionary& addEntry(const Entry& newEntry);

	size_t size() const;
};

