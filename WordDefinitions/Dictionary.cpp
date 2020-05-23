#include "Dictionary.h"

Dictionary& Dictionary::addEntry(const Entry& newEntry) {
	this->entries.push_back(newEntry);
	return *this;
}

size_t Dictionary::size() const
{
	return this->entries.size();
}
