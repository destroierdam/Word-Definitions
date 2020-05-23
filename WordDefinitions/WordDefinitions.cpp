#include <iostream>
#include "Dictionary.h"
#include "Entry.h"

int main() {
	Entry traicho("traicho", "genius");
	Entry pencho("pencho", "a hard working student");

	Dictionary dictionary;
	dictionary.addEntry(traicho).addEntry(pencho);
}